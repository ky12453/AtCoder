# queueの使用方法

queueで最初に入れた要素を最初に取り出すことができるデータ構造を実現する。

```c++
#include <queue>

// queueを定義
queue<int> q;

// 要素を格納
q.push(1);
q.push(2);

// サイズを取得
q.size();

// 先頭要素を取得
// この場合1が取り出される
q.front()

// 先頭要素を削除
// 戻り値はない
q.pop()
```