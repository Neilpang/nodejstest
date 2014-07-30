/* Simple S/MIME signing example */
#include <openssl/pem.h>
#include <openssl/pkcs7.h>
#include <openssl/err.h>

#include "head.h"



int main(int argc, char **argv)
{

  if (test()) {
    printf("%s\n", "Error.");
  } else {
  	printf("%s\n", "Success.");
  }
  return 0;
}