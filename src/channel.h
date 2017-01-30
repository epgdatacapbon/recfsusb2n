// Channel conversion table
// For BS/CS setting, refer to
// http://www5e.biglobe.ne.jp/~kazu_f/digital-sat/index.html
//

typedef struct _Channel_conv_table {
    char *channel;
    int freq;		// frequency no.
    int tsid;		// TS ID
} Channel_conv_table;

Channel_conv_table channel_table[] = {
    {"BS01_0", 101, 16400},  /* 151ch：BS朝日 */
    {"BS01_1", 101, 16401},  /* 161ch：BS-TBS */
    {"BS03_0", 103, 16432},  /* 191ch：WOWOWプライム */
    {"BS03_1", 103, 16433},  /* 171ch：BSジャパン */
    {"BS05_0", 105, 17488},  /* 192ch：WOWOWライブ */
    {"BS05_1", 105, 17489},  /* 193ch：WOWOWシネマ */
    {"BS07_0", 107, 17520},  /* 201ch：スターチャンネル2
                              * 202ch：スターチャンネル3 */
    {"BS07_1", 107, 18033},  /* 236ch：BSアニマックス */
    {"BS07_2", 107, 18034},  /* 256ch：ディズニー・チャンネル */
    {"BS09_0", 109, 16528},  /* 211ch：BS11 */
    {"BS09_1", 109, 16529},  /* 200ch：スターチャンネル1 */
    {"BS09_2", 109, 16530},  /* 222ch：TwellV */
    {"BS11_0", 111, 18096},  /* 238ch：FOXスポーツ＆エンターテイメント */
    {"BS11_1", 111, 18097},  /* 241ch：BSスカパー！ */
    {"BS11_2", 111, 18098},  /* 231ch：放送大学BS1
                              * 232ch：放送大学BS2
                              * 233ch：放送大学BS3 */
    {"BS13_0", 113, 16592},  /* 141ch：BS日テレ */
    {"BS13_1", 113, 16593},  /* 181ch：BSフジ */
    {"BS15_0", 115, 16625},  /* 101ch：NHK BS1 */
    {"BS15_1", 115, 16626},  /* 103ch：NHK BSプレミアム */
    {"BS19_0", 119, 18224},  /* 234ch：グリーンチャンネル */
    {"BS19_1", 119, 18225},  /* 242ch：J SPORTS 1 */
    {"BS19_2", 119, 18226},  /* 243ch：J SPORTS 2 */
    {"BS21_0", 121, 18256},  /* 252ch：イマジカBS・映画 */
    {"BS21_1", 121, 18257},  /* 244ch：J SPORTS 3 */
    {"BS21_2", 121, 18258},  /* 245ch：J SPORTS 4 */
    {"BS23_0", 123, 18288},  /* 251ch：BS釣りビジョン */
    {"BS23_1", 123, 18289},  /* 255ch：BS日本映画専門チャンネル */
    {"BS23_2", 123, 18290},  /* 258ch：DLife */

    {"CS2",    202, 24608},  /* ND2：
                              * 296ch：TBSチャンネル1
                              * 298ch：テレ朝チャンネル1
                              * 299ch：テレ朝チャンネル2 */
    {"CS4",    204, 28736},  /* ND4：
                              * 100ch：スカパー！プロモ
                              * 223ch：映画・チャンネルNECO
                              * 227ch：ザ・シネマ
                              * 250ch：スカイA
                              * 342ch：ヒストリーチャンネル
                              * 363ch：囲碁・将棋チャンネル */
    {"CS6",    206, 28768},  /* ND6：
                              * 294ch：ホームドラマチャンネル
                              * 323ch：MTV HD
                              * 329ch：歌謡ポップスチャンネル
                              * 340ch：ディスカバリーチャンネル
                              * 341ch：アニマルプラネット
                              * 354ch：CNNj */
    {"CS8",    208, 24704},  /* ND8：
                              * 055ch：ショップ チャンネル
                              * 218ch：東映チャンネル
                              * 219ch：衛星劇場
                              * 326ch：ミュージック・エア
                              * 339ch：ディズニージュニア
                              * 349ch：日テレNEWS24 */
    {"CS10",   210, 24736},  /* ND10：
                              * 800ch：スカチャン0
                              * 801ch：スカチャン1
                              * 802ch：スカチャン2
                              * 805ch：スカチャン3 */
    {"CS12",   212, 28864},  /* ND12：
                              * 254ch：GAORA
                              * 325ch：MUSIC ON! TV（エムオン！）HD
                              * 330ch：キッズステーション */
    {"CS14",   214, 28896},  /* ND14：
                              * 292ch：時代劇専門チャンネルHD
                              * 293ch：ファミリー劇場HD
                              * 310ch：スーパー！ドラマTV HD */
    {"CS16",   216, 28928},  /* ND16：
                              * 290ch：TAKARAZUKA SKY STAGE
                              * 305ch：チャンネル銀河
                              * 311ch：AXN
                              * 333ch：アニメシアターX (AT-X)
                              * 343ch：ナショナル ジオグラフィック
                              * 353ch：BBCワールドニュース */
    {"CS18",   218, 28960},  /* ND18：
                              * 240ch：ムービープラスHD
                              * 262ch：ゴルフネットワークHD
                              * 314ch：女性チャンネル♪LaLa TV */
    {"CS20",   220, 28992},  /* ND20：
                              * 307ch：フジテレビONE
                              * 308ch：フジテレビTWO
                              * 309ch：フジテレビNEXT */
    {"CS22",   222, 29024},  /* ND22：
                              * 161ch：QVC
                              * 297ch：TBSチャンネル2
                              * 312ch：FOX
                              * 322ch：スペースシャワーTV
                              * 331ch：カートゥーン ネットワーク
                              * 351ch：TBSニュースバード */
    {"CS24",   224, 29056},  /* ND24：
                              * 257ch：日テレジータス
                              * 295ch：MONDO TV
                              * 300ch：日テレプラス
                              * 316ch：AXNミステリー
                              * 321ch：スペースシャワーTVプラス */

    {"" , 0, 0}  /* terminate */
};

int channel_conv(char* channel);
