# !/bin/sh

RANDOM_BYTE=$1

echo "> sudo tpm2_getrandom ${RANDOM_BYTE}"
sudo tpm2_getrandom ${RANDOM_BYTE}

echo -e -n "\nwait any key...\n>"
read