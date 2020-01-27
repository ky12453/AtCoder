# mapご作法

## 計算量

* データ構造が二分木のため、検索計算量はO(logN)
* 値の追加は二分木を再構成するため、構築計算量はO(NlogN)


## 特徴

* デフォルトではキーを昇順にソートした状態となる
* キーを降順にソートしたい場合は map<int, int, greater< int >> とする


## キー、値の同時格納

```c++
map<int, int> mp;
mp.insert(make_pair(1, 100));  // キー：1, 値：100を格納
```


## 全てのキー、値の取得

```c++
map<int, int> mp;

mp[1] = 100;
mp[2] = 101;

for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    cout << mp->first << endl;  // 1, 2を表示 
    cout << mp->second << endl;  // 100, 101を表示
}
```

##  キーの検索

count(), find()を使用する方法がある。count()の方が直感的でよい。
```c++
map<int, int> mp;

mp[1] = 100;
mp[2] = 101;

// find()を使用する方法
// キーが設定されていない場合はend()へのイテレータが返却される
auto itr = mp.find(1);
if (itr == mp.end()) {
    // キーが設定されている場合の処理
}

// count()を使用する方法
// キーが設定されていない場合は0が返却される
int flg = mp.count(1);
if (flg == 0) {
    // キーが設定されていない場合の処理
}
```


[参考：手を動かしてさくさく理解するmap](http://vivi.dyndns.org/tech/cpp/map.html)<br>
[参考：キーの検索方法](https://minus9d.hatenablog.com/entry/20120607/1339073711)
