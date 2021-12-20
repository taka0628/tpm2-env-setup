* [English Version](#Eng)

# TPM2.0 環境構築用プログラム

## 本プログラムの目的
* TPMに触れたことの無い人がTPMの環境築と最初をアクセスを行うためのプログラムです

## TPMとは何か
* Trusted Platform Module (TPM）はマザーボード上に存在する部品です
* 暗号計算やハッシュ計算、鍵管理など様々なセキュリ機能を利用できます

### よりTPMについて知りたい方へ
  * A Practical Guide to TPM 2.0” by Will Arthur, David Challener, Kenneth Goldman
  * https://link.springer.com/book/10.1007/978-1-4302-6584-9

## ツールの提供する機能
* TPM2.0の環境構築
  * tpm2-tssとtpm2-toolsを使用して環境構築を行います
    * tpm2-tss: https://github.com/tpm2-software/tpm2-tss
    * tpm2-tools: https://github.com/tpm2-software/tpm2-tools
* TPMを用いた乱数の生成
  * 環境構築後にTPMへの最初のアクセスとしてTPMを用いた乱数生成を行います
  * 使用するコマンドは tpm2_getrandomです
*  使用ライブラリ
   * プログラム実行時にインストールされます
    ```
	autoconf
	autoconf-archive
	libcmocka0
	libcmocka-dev
	procps
	iproute2
	build-essential
	git
	pkg-config
	gcc
	libtool
	automake
	libssl-dev
	uthash-dev
	doxygen
	libjson-c-dev
	libini-config-dev
	libcurl4-openssl-dev
	libltdl-dev
	python-yaml
	```


##

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

## TPMへアクセス確認

### TPM2 Get Randomを選択
* 取得する乱数のバイト数を選択可能
* 上限は32Byte

![mainwindow](image/tpm_mainwindow.png)

## 謝辞
本プログラムの作成にあたり、Trusted Computing Group (TCG)の方々から全面的なサポートをしていただきました。
ここに感謝いたします。


<a id="Eng"></a>

# TPM2.0 Building Environment

## Project Objective
* For Novice User, this project is to provide a quick & easy method to build up the computing environment to access TPM to study & develop APPs leverage Trustworthy of TPM.

## What is “TPM”?
* Trusted Platform Module (TPM) is a chip on the motherboard physically (or logically inside Processor), providing several functions for Security features.
* It provides various security functions, such as cypher, hash function, several key managements in secure way, and more, to establish trustworthy platform environment.

### For more technical details, visit following Web site to get reference information.
  * A Practical Guide to TPM 2.0” by Will Arthur, David Challener, Kenneth Goldman
  * https://link.springer.com/book/10.1007/978-1-4302-6584-9

## Features provided by this project modules
* Building the TPM2.0 environment
  * Use tpm2-tss and tpm2-tools to build the environment
  * tpm2-tss: https://github.com/tpm2-software/tpm2-tss
  * tpm2-tools: https://github.com/tpm2-software/tpm2-tools
* Random number generation using TPM
  * Here describes Random Number generation using TPM as one sample after environment setup.
  * It uses TPM Command “tpm2_getrandom” defined in TPM2.0 specification.
* Required Libraries
```
autoconf
autoconf-archive
libcmocka0
libcmocka-dev
procps
iproute2
build-essential
git
pkg-config
gcc
libtool
automake
libssl-dev
uthash-dev
doxygen
libjson-c-dev
libini-config-dev
libcurl4-openssl-dev
libltdl-dev
python-yaml
```

# Requisites and Execution Environments
* PC with TPM2.0
* TPM is enabled/activated in BIOS setup menu
* Ubuntu OS in standalone mode
  * (Note: it is not easy to access from Virtual Machine to TPM, so Bare Metal environment is recommended)

# Execution Steps

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
## Verify the built-environment allows to access to TPM

### Select "TPM2 Get Random"
* You can select size of Random number to be generated
* (Maximum lengtyh is 32bytes)

![mainwindow](image/tpm_mainwindow.png)

## Special Thanks
I appreciate for such challenge opportunity to study & develop trustworthy features based on Global Standard Security Chip; TPM, and several supports from Trusted Computing Group (TCG) which allow me to focus on this challenge without any difficulty.