CURRENT_PATH := $(shell pwd)
GET_RANDOM_FILE := "GetRandom.sh"

install:
	@echo "Build a TPM environment (yes/no)"
	@read -p "->" ans;\
if [ "$$ans" != yes ]; then  \
      exit 1;\
fi
	chmod u+x $(GET_RANDOM_FILE)
	make install_dependencies
	make install_tss
	make install_tools

install_dependencies:
	@echo [install dependencies]
	sudo apt update 
	sudo apt install \
	autoconf \
	autoconf-archive \
	libcmocka0 \
	libcmocka-dev \
	procps \
	iproute2 \
	build-essential \
	git \
	pkg-config \
	gcc \
	libtool \
	automake \
	libssl-dev \
	uthash-dev \
	doxygen \
	libjson-c-dev \
	libini-config-dev \
	libcurl4-openssl-dev \
	libltdl-dev \
	python-yaml
	
install_tss:
	@echo [install TPM2-TSS]
	sleep 1
	rm -rf tpm2-tss
	git clone https://github.com/tpm2-software/tpm2-tss.git
	cd tpm2-tss; \
	./bootstrap; \
	./configure --prefix=/usr; \
	make; \
	sudo make install 

install_tools:
	@echo [install TPM2-tools]
	sleep 1
	rm -rf tpm2-tools
	git clone https://github.com/tpm2-software/tpm2-tools.git
	cd tpm2-tools;\
	./bootstrap;\
	./configure --prefix=/usr;\
	make;\
	sudo make install

test:
	@echo "Build a TPM environment (yes/no)"
	@read -p "->" ans;\
if [ "$$ans" != yes ]; then  \
      exit 1;\
fi
	echo $(CURRENT_PATH)