# Pop'n Top キーボード ビルドガイド
- [キット内容](#キット内容)
- [組み立て方（はんだ付け）](#組み立て方はんだ付け)
- [動作テスト](#動作テスト)
- [組み立て方（後半）](#組み立て方後半)
- [カスタマイズ](#キーマップの確認変更方法)
- [おまけ](#おまけ)

## キット内容
![](img/set.jpg)  
||部品名|数| |
|-|-|-|-|
|1|メインボード（黒・大）|2|少し短い方が左手用です。|
|2|ミドルプレート（透明・中）|2||
|3|ボトムプレート（黒・中）|2||
|4|ボトムプレート（透明・小）|2||
|5|ネジ（短）|36|3mm|
|6|ネジ（長）|24|5mm|
|7|スペーサー（短）|18|3mm|
|8|スペーサー（長）|12|8mm|
|9|ダイオード|50||
|10|リセットスイッチ|2||
|11|TRRSジャック|2||
|12|ゴム足|12||

## キット以外に必要なもの
|部品名|数|| |
|-|-|-|-|
|Pro Micro コンスルー付き|2||[遊舎工房様販売ページ](https://shop.yushakobo.jp/products/promicro-spring-pinheader)|
|キースイッチ|50|Kailh Choc V1 もしくは V2||
|キーキャップ|50|1Ux42、1.5Ux3、1.75Ux2、2Ux3|[選び方](howtochosekeycaps.md)|
|TRRSケーブル|1|TRS（ステレオミニ）ケーブルでもいいです。||
|Micro USB ケーブル|1|データ通信対応でUSB2.0 Micro-Bのもの。||

## オプション
|部品名|数|||
|-|-|-|-|
|SK6812MINI-E|50|[取り付け方](led.md)|[遊舎工房様販売ページ](https://shop.yushakobo.jp/products/sk6812mini-e-10)|
|WS2812B|9|無くてもバックライトだけ光ります。|[遊舎工房様販売ページ](https://shop.yushakobo.jp/products/a0800ws-01-10)|
|1N4148W|50|表面実装タイプのダイオード|[遊舎工房様販売ページ](https://shop.yushakobo.jp/products/a0800di-02-100)|
|両面テープ||ねじの頭の0.5㎜より厚いものがおすすめです。||

## 必要な工具
|工具名| |
|-|-|
|はんだごて||
|はんだごて置き場||
|鉛入りはんだ||
|細いドライバー|+の1番ドライバー。|
|ニッパー等ダイオードの足を切れるもの||
|Microsoft Edge、もしくはGoogle Chrome||

## あると便利な工具
|工具名||
|-|-|
|耐熱シリコンマット||
|斜めに切ったタイプのこて先||
|温度調節可能なはんだごて|300度-350度前後|
|ピンセット|LEDには必須|
|フラックス|LEDには必須|
|テスター||
|フラックスリムーバー||
|マスキングテープ||
|はんだ吸い取り線||

## 組み立て方（はんだ付け）
正しくはんだ付けが終わるとこのようになります。  
![](img/full2.jpg)

はんだ付けのやり方は動画で見るとわかりやすいです。  
パーツは思ったより壊れないので落ち着いて作業すると失敗しにくいです。
 - ホームセンターのDCMさんの解説動画(58秒～) https://www.youtube.com/watch?v=JFQg_ObITYE&t=58s


それではダイオードを、左手用はD1からD23まで右手用はD1からD27まで取り付けます。  
足を曲げて裏から差し込みます。  
![](img/diode1.jpg)  
ダイオードには向きがあります。三角形の先の棒と黒線を合わせましょう。  

表で更に足を曲げて抜けないようにします。  
ダイオードと並行に曲げるとあとでキースイッチに干渉しにくいです。  
![](img/diode5.jpg)  

はんだ付けをして足を切ります。  
![](img/diode6.jpg)  

TRRSジャックを裏から差し込み表ではんだ付けします。  
終わったらリセットスイッチを裏から差し込み表ではんだ付けします。   
![](img/trrs.jpg)   
フラックスリムーバーを使う場合ここで表面をきれいにしましょう。
![](img/trrs2.jpg)  

キースイッチを表から差し込み裏ではんだ付けします。  
![](img/switch.jpg)  

メインボードの裏にコンスルーを挿します。  
コンスルーの窓が高くて両方とも同じ向きになるように設置します。  
![](img/promicro1.jpg)   
挿すだけではんだ付けはしません。  

コンスルーにPro Microを挿します。TX0, RAW, USBの位置をシルク印刷と合わせましょう。  
![](img/promicro2.jpg)   
そして、Pro Micro側のコンスルーの足を半田付けします。  
![](img/promicro4.jpg)   
これでPro Microを抜き差しできるようになりました。  
両手分作り終えたら次に進んでください。  

## 動作テスト
Pro Microに動作ソフト（ファームウェア）を書き込んで動作確認をしましょう。  
左手用とPCをUSBケーブルでつないでください。   

ファームウェアをダウンロードしてEdgeかChromeでPro Micro Web Updaterにアクセスしてください。  
- テスト用ファームウェア [popntop_test.hex](https://github.com/Taro-Hayashi/Pop-n-Top/releases/download/14.15/popntop_leftconnected_test.hex)  
- Pro Micro Web Updater https://sekigon-gonnoc.github.io/promicro-web-updater/index.html  

ファイルの選択ボタンを押してダウンロードしたファームウェアを指定したら、flashボタンを押しましょう。  
![](img/promicrowebupdater1.jpg)  

ブラウザのアドレスバーからメッセージが出てきたら、キットのリセットスイッチを押します。  
すると選択欄にArduino Microが出てきてクリックできるようになります。  
![](img/promicrowebupdater2.jpg)  

選択して接続を押すと書き込みが終わります。  
![](img/promicrowebupdater3.jpg)  
ファームウェアを更新する時もこの手順で行います。  

USBで接続しないと書き込めないので分割キーボードでは左手用と右手用に同じ手順を繰り返します。  
右手用にも同じファームウェアを書き込んでください。  

書き込めたら一度USBケーブルを外し、TRRSケーブルで左右を繋げます。  
（TRRSケーブルを抜き差しするときはPCとは接続しない方が安全だそうです。）  
左手用とPCをUSBケーブルで接続してタイプすると1-50の数字が打てるはずです。     

お疲れ様でした。問題がなければはんだ付けは終了です。  

## 組み立て方（後半）
USBケーブル、TRRSケーブルを抜いてプレートを組付けます。  
アクリルからは保護フィルムを剥がしてください。割れやすいので気をつけましょう。  

メインボード裏面の赤丸の箇所にスペーサー（短）をネジ（短）で取り付けてミドルプレート（透明・中）を嵌めます。  
![](img/bottom1.jpg)  
ボトムプレート（黒・中）をネジ（短）で止めます。  

メインボードの残ったネジ穴にスペーサー（長）をネジ（長）で取り付け、ボトムプレート（透明・小）をネジ（長）で止めます。  
![](img/bottom3.jpg)   

キーキャップを取り付けたら本番用のファームウェアに更新しましょう。  
- [popntop_via.hex](https://github.com/Taro-Hayashi/Pop-n-Top/releases/download/14.15/popntop_leftconnected_via.hex)  

ゴム足を貼ってTRRSケーブルで左右を繋いだら完成です。  
![](img/rubber.jpg)  
![](img/done.jpeg)  
USBケーブルは左手用に接続してください。  

## キーマップの確認、変更方法
このキットはレイヤー機能を使っています。  
![](img/layout.png)
[Keyboard Layout Editor で見る](http://www.keyboard-layout-editor.com/#/gists/a78d9342dd93a60fed1b255a5a018bf9)  

使わないキーを削除したり使用頻度の高いキーを押しやすい位置に変更してみましょう。  

  ChromeかEdgeでRemapにアクセスしてください。  
- Remap https://remap-keys.app/  

![](img/remap1.png)  
左を選んで進んでいくとアドレスバーからメッセージが出てキーボードを選択できます。

キーマップをドラッグアンドドロップで変更し右上のflashボタンを押すと反映されます。  
![](img/remap3.png)  
RemapにはMac用のレイアウトも用意してありますのでよかったら手間を省くのに使ってください。

## 液晶タブレットに乗せる場合
1番上の行を引っ掛ける事で液タブに乗せる事ができます。  
![](img/tab.jpeg)  
ゴム足を外して両面テープで固定すると安定します。  
跡が残るといけないので画面には保護フィルムを貼ってください。  

## おまけ
寸法です。ダンボールで作れるペーパークラフトもあります。
![](img/size.png)　　
![](img/danbo.jpg)　　
- [realsizeA4.pdf](https://github.com/Taro-Hayashi/Pop-n-Top/releases/download/14.15/realsizeA4.pdf)  

A4サイズです。定規があればプリントしなくても作れます。

ファームウェアのフォルダ  
https://github.com/Taro-Hayashi/qmk_firmware/tree/master/keyboards/popntop  

VIA用のJSONファイル [popntop_leftconnected.json](https://github.com/Taro-Hayashi/Pop-n-Top/releases/download/14.15/popntop_leftconnected.json)  

ミドル、ボトムプレートのデザインデータ  
[popntop_plates.zip](https://github.com/Taro-Hayashi/Pop-n-Top/releases/download/14.15/popntop_plates.zip)  
発注先のルールに沿ってデータを修正してください。  

ご不明な点があればBOOTHのメッセージかtwitterでいつでも聞いてください。  

foostan様のフットプリントを流用、改変して使わせていただきました。  
https://github.com/foostan/kbd/  
https://github.com/foostan/kbd/blob/master/LICENSE  

遊舎工房: https://shop.yushakobo.jp/products/2796
BOOTH: https://tarohayashi.booth.pm/items/3154435  
