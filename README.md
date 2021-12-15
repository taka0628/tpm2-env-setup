* [English Version](#Eng)

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
* TPM2.0を搭載したPC
* BIOSからTPMが有効化済み
* ローカル環境で動作するUbuntu
  * VMからTPMへのアクセスはできません

# 実行方法

## 環境構築

### 実行ファイルへ移動し実行
```
cd build
./tpm-setup
```

###  "TPM2 Env Setup"を選択
![mainwindow](image/tpm_mainwindow.png)

### 開いた端末でyesを入力
![confirm](image/tpm_envSetup.png)

---
## TPMへアクセス確認

### TPM2 Get Randomを選択
* 取得する乱数のバイト数を選択可能
* 上限は32Byte

![mainwindow](image/tpm_mainwindow.png)

---
<a id="Eng"></a>

# TPM2.0 Building Environment

## What you can do
* Building the TPM2.0 environment
  * Use tpm2-tss and tpm2-tools to build the environment
  * tpm2-tss: https://github.com/tpm2-software/tpm2-tss
  * tpm2-tools: https://github.com/tpm2-software/tpm2-tools
* Generating random numbers using TPM
  * After setting up the environment, the first access to TPM is to generate random numbers using TPM.
  * The command to use is tpm2_getrandom.
  * There will be no other access to TPM except for random number generation.
# Execution environment
* PC with TPM2.0
* TPM already enabled from BIOS
* Ubuntu running in local environment
  * No access to TPM from VM

# How to run

## Build the environment

### Go to the executable and run it
```
cd build
./tpm-setup
```

###  Select "TPM2 Env Setup"
![mainwindow](image/tpm_mainwindow.png)

### Enter yes on the opened terminal
![confirm](image/tpm_envSetup.png)

---
## Check access to TPM.

### Select "TPM2 Get Random"
* You can select the number of bytes of random numbers to get.
* Upper limit is 32Byte

![mainwindow](image/tpm_mainwindow.png)