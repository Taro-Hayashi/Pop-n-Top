# Pop'n Top キーボード ビルドガイド

しおり  
- [組み立て方](#組み立て方)
- [カスタマイズ](#キーマップの確認変更方法)
- [おまけ](#おまけ)

![test](img/sample.jpg)

## キット内容
|部品名|数量| |
|:-|:-|:-|
|メインボード|1|黒・大|
|ミドルプレート|1|透明・中|
|ボトムプレート|1|黒・中|
|ボトムプレート|1|透明・小|
|ネジ（短）|36|3mm、銀と黒が18個ずつ、もしくは黒36個|
|ネジ（長）|24|5mm、銀と黒が12個ずつ、もしくは黒24個|
|スペーサー（短）|18|3mm|
|スペーサー（長）|12|8mm|
|ダイオード|50||
|リセットスイッチ|2||
|TRRSジャック|2||
|ゴム足|4||

## キット以外に必要なもの
|部品名|数量| |
|:-|:-|:-|
|Pro Micro コンスルー付き|2|https://shop.yushakobo.jp/products/promicro-spring-pinheader|
|キースイッチ（Kailh Choc V2）|50|https://shop.yushakobo.jp/collections/all-switches/products/kailh-choc-v2|
|キーキャップ（CherryMX互換）|50|[選び方](#キーキャップの選び方)|
|オス-オス ミニプラグケーブル|1|TRSケーブル、TRRSケーブルとしても売られています。|
|Micro USB ケーブル|1|USB2.0 Micro-Bのもの。|

## 必要な工具
|工具名| |
|:-|:-|
|はんだごて||
|はんだごて置き場||
|鉛入りはんだ||
|細いドライバー|1番ドライバー|

## あると便利な工具
|工具名| |
|:-|:-|
|斜めに切ったタイプのこて先||
|温度調節可能なはんだごて|300度-350度前後|
|ピンセット|LEDには必須|
|フラックス|LEDには必須|
|フラックスリムーバー||
|マスキングテープ||
|はんだ吸い取り線||
|リードベンダー||
|ラジオペンチ||

[▲トップに戻る](#Popn-Top-キーボード-ビルドガイド)

## 組み立て方
ダイオードの足を曲げて裏から差し込みます。
ダイオードには向きがあります。三角形の先の棒と黒線を合わせましょう。
表で更に足を曲げて抜けないようにします。あとでキースイッチに干渉しないようダイオードと並行に曲げて下さい。
はんだ付けをして足を切ります。
マスキングテープで貼って足を先に切ると綺麗に仕上がります。
表面実装型を使うと表からは穴しか見えなくなります。

TRRSジャックを裏から差し込み表ではんだ付けします。

リセットスイッチを裏から差し込み表ではんだ付けします。

キースイッチを表から差し込み裏ではんだ付けします。

メインボードの裏にコンスルーを挿します。コンスルーの窓が高く、向きが同じになるように設置します。挿すだけではんだ付けはしません。
コンスルーにPro Microを挿します。TX0, RAW, USBの位置をシルク印刷と合わせましょう。裏表に注意してください。
Pro Micro側のコンスルーの足を半田付けします。四隅を先に固定すると安定します。

電気的な部分が完成したのでテストをします。
QMK ToolboxをインストールしてUSBケーブルでキットとPCを繋ぎましょう。
https://github.com/qmk/qmk_toolbox/releases 
テスト用のhexファイルをダウンロードして下さい。
*******_test.hex

QMK Toolboxでhexファイルを指定してAuto-Flashにチェックを入れます。
リセットスイッチを押すとファームウェアが書き込まれます。
ファームウェアを更新する時もこの手順で行います。

Chrome, Edgeを使っている場合Pro Micro Web Updaterも使えます。
https://sekigon-gonnoc.github.io/promicro-web-updater/index.html


全てのキーが反応することを確認してください。
反応しない場所が一箇所の場合スイッチ、同じ行で複数個の場合ダイオードのはんだを見直してください。

Micro-USB端子を抜いてプレートを組付けます。
プレートには向きがあります。アクリルのミドルプレートは割れやすいので気を付けましょう。

ボトムプレート（黒・中）にスペーサー（短）をネジ（短）で取り付けます。
スペーサーが隠れるようにミドルプレートを嵌めます。
組み合わせたものをメインボードの裏からPro Microに重ならないようにネジ（短）で止めます。

ボトムプレート（透明・小）にスペーサー（長）をネジ（長）で取り付けます。
Pro Microを覆うようにネジ（長）で止めます。

キーキャップを取り付けてPCに接続し、ファームウェアを更新します。
Windows用のサンプルファームウェア shotgun_windows.hex
Mac用のサンプルファームウェア shotgun_mac.hex

ゴム足を貼ったら完成です。

[▲トップに戻る](#Popn-Top-キーボード-ビルドガイド)
## キーマップの確認、変更方法
## キースイッチの選び方
## キーキャップの選び方
[▲トップに戻る](#Popn-Top-キーボード-ビルドガイド)
## LEDの取り付け方
## 液晶タブレットに乗せる場合
## BLE Micro Pro, 電池基板、LPME-IO2a対応について
## おまけ
[▲トップに戻る](#Popn-Top-キーボード-ビルドガイド)
