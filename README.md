VIPSTARCOIN Core Ver 1.1.0 (Unofficial)
=========

(Japanese HP)https://www.vipstarcoin.jp/
(English HP)https://www.vipstarcoin.jp/en/

### English

What is VIPSTARCOIN 1.1.0?
-------------

VIPSTARCOIN is a new blockchain based on HTMLCOIN which uses Bitcoin Core and integrates Ethereum based smart contracts. It implements an extensible design which is capable of adding more VMs, enabled primarily through the Account Abstraction Layer, which allows for an account based virtual machine to function on a UTXO based blockchain. 

What is VIPSTARCOIN Core?
------------------

VIPSTARCOIN Core is our primary mainnet wallet. It implements a full node and is capable of storing, validating, and distributing all history of the VIPSTARCOIN network. VIPSTARCOIN Core is considered the reference implementation for the VIPSTARCOIN network. 

VIPSTARCOIN Core currently implements the following:

* Sending/Receiving VIPSTARCOIN
* Sending/Receiving VRC20 tokens on the VIPSTARCOIN network
* The implementation "Native SegWit" on the VIPSTARCOIN network 
* Staking and creating blocks for the VIPSTARCOIN network
* Creating and interacting with smart contracts
* Running a full node for distributing the blockchain to other users
* "Prune" mode, which minimizes disk usage
* Regtest mode, which enables developers to very quickly build their own private VIPSTARCOIN network for Dapp testing
* Compatibility with the Bitcoin Core set of RPC commands and APIs

Quickstart
----------
### Build on Ubuntu

    This is a quick start script for compiling VIPSTARCOIN on Ubuntu

    sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils git cmake libboost-all-dev
    sudo apt-get install software-properties-common
    sudo add-apt-repository ppa:bitcoin/bitcoin
    sudo apt-get update
    sudo apt-get install libdb4.8-dev libdb4.8++-dev

    # If you want to build the Qt GUI:
    sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler

    git clone https://github.com/vipstar-dev/VIPSTARCOIN --recursive
    cd VIPSTARCOIN

    # Note autogen will prompt to install some more dependencies if needed
    ./autogen.sh
    ./configure 
    make -j2

### Build on OSX

The commands in this guide should be executed in a Terminal application.
The built-in one is located in `/Applications/Utilities/Terminal.app`.

#### Preparation

Install the OS X command line tools:

`xcode-select --install`

When the popup appears, click `Install`.

Then install [Homebrew](https://brew.sh).

#### Dependencies

    brew install cmake automake berkeley-db4 libtool boost --c++11 --without-single --without-static miniupnpc openssl pkg-config protobuf qt5 libevent imagemagick --with-librsvg

NOTE: Building with Qt4 is still supported, however, could result in a broken UI. Building with Qt5 is recommended.

#### Build VIPSTARCOIN Core

1. Clone the VIPSTARCOIN source code and cd into `VIPSTARCOIN`

        git clone --recursive https://github.com/vipstar-dev/VIPSTARCOIN
        cd VIPSTARCOIN

2.  Build VIPSTARCOIN Core:

    Configure and build the VIPSTARCOIN binaries as well as the GUI (if Qt is found).

    You can disable the GUI build by passing `--without-gui` to configure.

        ./autogen.sh
        ./configure
        make

3.  It is recommended to build and run the unit tests:

        make check

### Run

Then you can either run the command-line daemon using `src/vipstarcoind` and `src/vipstarcoin-cli`, or you can run the Qt GUI using `src/qt/vipstarcoin-qt`

For in-depth description of Sparknet and how to use VIPSTARCOIN for interacting with contracts, please see [sparknet-guide](doc/sparknet-guide.md).

License
-------

VIPSTARCOIN is GPLv3 licensed.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/vipstar-dev/VIPSTARCOIN/tags) are created
regularly to indicate new official, stable release versions of VIPSTARCOIN.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).


### Japanese

VIPSTARCOIN 1.1.0とは?
-------------

VIPSTARCOINはBitcoin CoreとEthereumがベースのスマートコントラクトを統合したHTMLCOINをベースとした新しいブロックチェーンです。これは主にアカウント匿名レイヤーを介して有効になっており、より多くのVMを追加できる拡張可能な設計を実装、アカウントベースの仮想マシンをUTXOベースのブロックチェーン上で機能させることができます。

VIPSTARCOIN Coreとは?
------------------

VIPSTARCOIN Coreは私たちが主に使うメインネットウォレットです。フルノードを実装し、VIPSTARCOINネットワークのすべての取引履歴などを保存、検証、配布することが可能です。VIPSTARCOIN CoreはVIPSTARCOINネットワークのリファレンス実装とみなされます。

VIPSTARCOIN Coreは以下を実装しています。

* VIPSTARCOINの送受信
* VIPSTARCOINネットワーク用のVRC20トークンの送受信
* VIPSTARCOINネットワーク用にネイティブSegWitを実装
* VIPSTARCOINネットワークでのコインのステークとブロックの作成
* スマートコントラクトの作成と利用
* ブロックチェーンを他のユーザーに配布するためのフルノードの実行
* ディスクの使用量を最小限に抑えるプルーンモード
* Regtestネットワーク、開発者はDappテスト用に独自の専用VIPSTARCOINネットワークを非常に迅速に構築できます。
* RPCコマンドとAPIのBitcoin Coreセットとの互換性

クイックスタート
----------
### Ubuntuでビルドする

    VIPSTARCOINをUbuntuでコンパイルするためのクイックスタートスクリプトです。

    sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils git cmake libboost-all-dev -y
    sudo apt-get install software-properties-common
    sudo add-apt-repository ppa:bitcoin/bitcoin -y
    sudo apt-get update
    sudo apt-get install libdb4.8-dev libdb4.8++-dev -y

    #Qt GUIウォレットをビルドする場合:
    sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler -y

    git clone https://github.com/vipstar-dev/VIPSTARCOIN --recursive
    cd VIPSTARCOIN

    #autogenは必要に応じていくつかの依存関係をインストールするように促します
    ./autogen.sh
    ./configure 
    make -j2

### OS Xでビルドする

このガイドのコマンドは、ターミナルアプリケーションで実行する必要があります。
以下の場所にあります。`/Applications/Utilities/Terminal.app`.

#### 準備

OS Xコマンドラインツールをインストールします。:

`xcode-select --install`

ポップアップが表示されたら、`Install`をクリックします。

次に、[Homebrew](https://brew.sh)をインストールします。

#### 依存関係

    brew install cmake automake berkeley-db4 libtool boost --c++11 --without-single --without-static miniupnpc openssl pkg-config protobuf qt5 libevent imagemagick --with-librsvg

注意：Qt4でのビルドはまだサポートされていますが、UIが壊れる可能性があります。Qt5でビルドすることをお勧めします。

#### VIPSTARCOIN Coreをビルドする

1. VIPSTARCOINのソースコードをクローンし、`VIPSTARCOIN`を`cd`する

        git clone --recursive https://github.com/vipstar-dev/VIPSTARCOIN
        cd VIPSTARCOIN

2. VIPSTARCOIN Coreをビルドする:

        VIPSTARCOIN CoreとGUI(Qtが見つかった場合)をビルドします。

        configureで`--without-gui`オプションを付け足すことで、GUIビルドを無効にすることができます。

        ./autogen.sh
        ./configure
        make

3. ユニットテストをビルドして実行することをお勧めします。:

        make check

### 実行

`src/vipstarcoind`を実行し、`src/vipstarcoin-cli`を使用することでcoindをコントロールできます。また、Qt GUIウォレットを使う場合は`src/qt/vipstarcoin-qt`を実行してください。

Sparknetの詳細な説明とVIPSTARCOINを使ってスマートコントラクトを使用する方法については、[sparknet-guide](doc/sparknet-guide.md)を見てください。

ライセンス
-------

VIPSTARCOINはGPLv3ライセンスです。

開発プロセス
-------------------

`master`ブランチは定期的に構築され、テストされていますが、完全に安全であることは保証されていません。 [タグ](https://github.com/vipstar-dev/VIPSTARCOIN/tags)はVIPSTARCOINの正式版、安全版を示すために定期的に作成されます。.

貢献ワークフローは[CONTRIBUTING.md](CONTRIBUTING.md)で説明しています。
