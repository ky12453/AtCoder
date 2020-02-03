# stackの使用方法

stackでh最後に入れた要素を最初に取り出すことができるデータ構造を実現する。

```c++
#include <stack>

// stackを定義
stack<int> s;

// 要素を格納
s.push(1);
s.push(2);

// サイズを取得
s.size();

// 先頭要素を取得
// この場合2が取り出される
s.top()

// 先頭要素を削除
// 戻り値はない
s.pop()
```