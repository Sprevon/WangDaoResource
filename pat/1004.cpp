#include <iostream>


#define MAX 100

using namespace std;

typedef struct node {
    int ID;
    int level;
} node;

typedef struct temp{
    int ID;
    int K;
    int IDs[100];
}temp;

void getMemory() {

}

int main() {
//
//	for(int i = 0; i < 100; i++){
//		if(i < 10) cout << "0" << i << " ";
//		else cout << i << " ";
//
//		cout << 1 << " ";
//
//		if(i + 1 < 10) cout << "0" << i + 1 << endl;
//		else cout << i + 1 << endl;
//	}

    /**
    * 接收数据
    **/
    int N, M;
    cin >> N >> M;

    /**
    * 读取非子节点并输出
    **/
    int levels[110]; //每个层级上的子节点数
    for (int i = 0; i < 110; i++) levels[i] = -1; //初始化
    if (N <= 1) {
        cout << 1;
        return 0;
    }
    //根节点处理
    levels[0] = 0;
    int ID, K, currLevel = 1;
    cin >> ID >> K;
    node nodeLevels[110];
    for (node &one: nodeLevels) {
        one.level = -1;
    }
    for (int i = 0; i < K; i++) {
        node oneNode;
        cin >> oneNode.ID;
        oneNode.level = currLevel;
        nodeLevels[oneNode.ID] = oneNode;
        if (levels[currLevel] < 0) levels[currLevel] = 1;
        else levels[currLevel]++;
        getMemory();
    }

    //后续处理
    temp currTmp[100];
    int tempCount =  0;
    node currNode;
    for (int i = 1; i < M; i++) {
        cin >> ID >> K;
        //减去父节点ID
        currLevel = nodeLevels[ID].level;
        if (currLevel == -1) {  //如果遇到暂时还没有就暂存
            temp tmp;
            tmp.ID = ID;
            tmp.K = K;
            for(int u = 0; u < tmp.K; u++){
                cin >> tmp.IDs[u];
            }
            tmp.IDs[K] = -1;
            currTmp[tempCount++] = tmp;
        } else {
            levels[currLevel]--;
            //塞入新子节点
            for (int j = 0; j < K; j++) {
                cin >> ID;
                currNode.ID = ID;
                currNode.level = ++currLevel;
                nodeLevels[ID] = currNode;
                if (levels[currLevel] < 0) levels[currLevel] = 1;
                else levels[currLevel]++;
                getMemory();
            }
        }
    }
    int remain = tempCount;
    int i = 0;
    while(remain > 0){
        temp temp1 = currTmp[i];
        currLevel = nodeLevels[temp1.ID].level;
        if(currLevel < 0){
            continue;
        } else {
            for (int j = 0; temp1.IDs[j] > 0; j++) {
                ID = temp1.ID;
                currNode.ID = ID;
                currNode.level = ++currLevel;
                nodeLevels[ID] = currNode;
                if (levels[currLevel] < 0) levels[currLevel] = 1;
                else levels[currLevel]++;
            }
            remain--;
        }
        i = (i + 1) % tempCount;
    }

    /**
    * 输出
    **/
    for (int i = 0; i < 105; i++) {
        if (levels[i + 1] < 0) {
            cout << levels[i];
            return 0;
        }
        cout << levels[i] << " ";
    }

}