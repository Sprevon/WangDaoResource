//
// Created by Seven on 2024/4/10.
//
#include <cmath>
#include <iostream>

/**
 * 答案部分
 */

int setPartition(int a[], int n){
    //low0、high0用于框定分类范围。
    //这样操作的原因在于，随着快速排序的不断进行，low和high的值会发生变化，在确定范围方面就缺乏支撑。故设置low0、high0来记录
    int pivotkey, low = 0, low0 = 0, high =  n- 1, high0 = n - 1, flag = 1, k = n / 2, i;//定义参数
    int s1 = 0, s2 = 0;
    while(flag){
        pivotkey = a[low];
        while(low < high){
            while(low < high && a[high] >= pivotkey) --high; //搜索右边比pivotkey小的键
            if(low != high) a[low] = a[high];  //将比pivotkey小的键值对转移到左边
            while(low < high && a[low] <= pivotkey) ++ low;  //搜索左边比pivotkey大的键
            if(low != high) a[high] = a[low];    //将比pivotkey大的键转移到右边
        }
        a[low] = pivotkey;  //填入中间位置
        if(low == k - 1)    //若第一次操作后可以得到中点
            flag = 0;    //结束循环
        else{
            if(low < k - 1){ //若比中点小
                low0 = ++low;   //对之前的值进行对比
                high = high0;
            }else{
                high0 = --high;   //对之后的值进行对比
                low = low0;
            }
        }
    }
    for(i = 0; i < k; i++) s1+=a[i];
    for(i = k; i < n; i++) s2 += a[i];
    return abs(s2 - s1);
}



/**
 * 辅助函数
 */
int main(){
    int a[] = {5, 4, 3, 2, 1, 0};
    std::cout << setPartition(a, 6) << std::endl;
}

