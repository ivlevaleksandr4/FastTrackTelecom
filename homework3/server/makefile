all: ASN1 server

ASN1:
	rm -rf ASN1Data
	mkdir ASN1Data
	asn1c RRC.asn1 -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps

server:
	rm -rf build
	mkdir build
	gcc -IASN1Data main.c server.c ASN1Data/*.c -o build/server -lsctp -DPDU=RRCConnectionSetup -DASN_DISABLE_OER_SUPPORT

start:
	sh PortPurge.sh
	./build/server

clean:
	sh PortPurge.sh
	rm -rf build