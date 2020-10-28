#ifndef __CRYPT3_H__
#define __CRYPT3_H__
void set_key(char* key,char KS[16][48],char* E);
char* crypt(char* pw, char* salt, char* iobuf);
#endif
