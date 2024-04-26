all: ASN1 client
 
ASN1:
	rm -rf ASN1Data
	mkdir ASN1Data
	asn1c RRC.asn1 -D ASN1Data -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps
 
client:
	rm -rf build
	mkdir build
	gcc -IASN1Data main.c client.c ASN1Data/*.c -o build/client -lsctp -DPDU=RRCConnectionSetup -DASN_DISABLE_OER_SUPPORT
 
start:
	./build/client
 
clean:
	rm -rf build
