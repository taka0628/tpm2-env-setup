# TPM2.0 環境構築用プログラム


## できること
* TPM2.0の環境構築
  * tpm2-tssとtpm2-toolsを使用して環境構築を行います
  * tpm2-tss: https://github.com/tpm2-software/tpm2-tss
  * tpm2-tools: https://github.com/tpm2-software/tpm2-tools
* TPMを用いた乱数の生成
  * 環境構築後にTPMへの最初のアクセスとしてTPMを用いた乱数生成を行います
  * 使用するコマンドは tpm2_getrandomです
  * 乱数生成以外にTPMへのアクセスは行いません

# 実行環境
* TPMを搭載したPC
* BIOSからTPMが有効化済み
* ローカル環境で動作するUbuntu
  * VMからTPMへのアクセスはできません

# 実行方法