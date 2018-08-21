VIPSTARCOIN Core Ver 1.1.0
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

VIPSTARCOIN 1.1.0�Ƃ�?
-------------

VIPSTARCOIN��Bitcoin Core��Ethereum���x�[�X�̃X�}�[�g�R���g���N�g�𓝍�����HTMLCOIN���x�[�X�Ƃ����V�����u���b�N�`�F�[���ł��B����͎�ɃA�J�E���g�������C���[����ėL���ɂȂ��Ă���A��葽����VM��ǉ��ł���g���\�Ȑ݌v�������A�A�J�E���g�x�[�X�̉��z�}�V����UTXO�x�[�X�̃u���b�N�`�F�[����ŋ@�\�����邱�Ƃ��ł��܂��B

VIPSTARCOIN Core�Ƃ�?
------------------

VIPSTARCOIN Core�͎���������Ɏg�����C���l�b�g�E�H���b�g�ł��B�t���m�[�h���������AVIPSTARCOIN�l�b�g���[�N�̂��ׂĂ̎�������Ȃǂ�ۑ��A���؁A�z�z���邱�Ƃ��\�ł��BVIPSTARCOIN Core��VIPSTARCOIN�l�b�g���[�N�̃��t�@�����X�����Ƃ݂Ȃ���܂��B

VIPSTARCOIN Core�͈ȉ����������Ă��܂��B

* VIPSTARCOIN�̑���M
* VIPSTARCOIN�l�b�g���[�N�p��VRC20�g�[�N���̑���M
* VIPSTARCOIN�l�b�g���[�N�ł̃R�C���̃X�e�[�N�ƃu���b�N�̍쐬
* �X�}�[�g�R���g���N�g�̍쐬�Ɨ��p
* �u���b�N�`�F�[���𑼂̃��[�U�[�ɔz�z���邽�߂̃t���m�[�h�̎��s
* �f�B�X�N�̎g�p�ʂ��ŏ����ɗ}����v���[�����[�h
* Regtest�l�b�g���[�N�A�J���҂�Dapp�e�X�g�p�ɓƎ��̐�pVIPSTARCOIN�l�b�g���[�N����ɐv���ɍ\�z�ł��܂��B
* RPC�R�}���h��API��Bitcoin Core�Z�b�g�Ƃ̌݊���

�N�C�b�N�X�^�[�g
----------
### Ubuntu�Ńr���h����

    VIPSTARCOIN��Ubuntu�ŃR���p�C�����邽�߂̃N�C�b�N�X�^�[�g�X�N���v�g�ł��B

    sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils git cmake libboost-all-dev -y
    sudo apt-get install software-properties-common
    sudo add-apt-repository ppa:bitcoin/bitcoin -y
    sudo apt-get update
    sudo apt-get install libdb4.8-dev libdb4.8++-dev -y

    #Qt GUI�E�H���b�g���r���h����ꍇ:
    sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler -y

    git clone https://github.com/vipstar-dev/VIPSTARCOIN --recursive
    cd VIPSTARCOIN

    #autogen�͕K�v�ɉ����Ă������̈ˑ��֌W���C���X�g�[������悤�ɑ����܂�
    ./autogen.sh
    ./configure 
    make -j2

### OS X�Ńr���h����

���̃K�C�h�̃R�}���h�́A�^�[�~�i���A�v���P�[�V�����Ŏ��s����K�v������܂��B
�ȉ��̏ꏊ�ɂ���܂��B`/Applications/Utilities/Terminal.app`.

#### ����

OS X�R�}���h���C���c�[�����C���X�g�[�����܂��B:

`xcode-select --install`

�|�b�v�A�b�v���\�����ꂽ��A`Install`���N���b�N���܂��B

���ɁA[Homebrew](https://brew.sh)���C���X�g�[�����܂��B

#### �ˑ��֌W

    brew install cmake automake berkeley-db4 libtool boost --c++11 --without-single --without-static miniupnpc openssl pkg-config protobuf qt5 libevent imagemagick --with-librsvg

���ӁFQt4�ł̃r���h�͂܂��T�|�[�g����Ă��܂����AUI������\��������܂��BQt5�Ńr���h���邱�Ƃ������߂��܂��B

#### VIPSTARCOIN Core���r���h����

1. VIPSTARCOIN�̃\�[�X�R�[�h���N���[�����A`VIPSTARCOIN`��`cd`����

        git clone --recursive https://github.com/vipstar-dev/VIPSTARCOIN
        cd VIPSTARCOIN

2. VIPSTARCOIN Core���r���h����:

        VIPSTARCOIN Core��GUI(Qt�����������ꍇ)���r���h���܂��B

        configure��`--without-gui`�I�v�V������t���������ƂŁAGUI�r���h�𖳌��ɂ��邱�Ƃ��ł��܂��B

        ./autogen.sh
        ./configure
        make

3. ���j�b�g�e�X�g���r���h���Ď��s���邱�Ƃ������߂��܂��B:

        make check

### ���s

`src/vipstarcoind`�����s���A`src/vipstarcoin-cli`���g�p���邱�Ƃ�coind���R���g���[���ł��܂��B�܂��AQt GUI�E�H���b�g���g���ꍇ��`src/qt/vipstarcoin-qt`�����s���Ă��������B

Sparknet�̏ڍׂȐ�����VIPSTARCOIN���g���ăX�}�[�g�R���g���N�g���g�p������@�ɂ��ẮA[sparknet-guide](doc/sparknet-guide.md)�����Ă��������B

���C�Z���X
-------

VIPSTARCOIN��GPLv3���C�Z���X�ł��B

�J���v���Z�X
-------------------

`master`�u�����`�͒���I�ɍ\�z����A�e�X�g����Ă��܂����A���S�Ɉ��S�ł��邱�Ƃ͕ۏ؂���Ă��܂���B [�^�O](https://github.com/vipstar-dev/VIPSTARCOIN/tags)��VIPSTARCOIN�̐����ŁA���S�ł��������߂ɒ���I�ɍ쐬����܂��B.

�v�����[�N�t���[��[CONTRIBUTING.md](CONTRIBUTING.md)�Ő������Ă��܂��B