/* resetprop.h - API for resetprop
 */

#ifndef _RESETPROP_H_
#define _RESETPROP_H_

#ifdef __cplusplus
extern "C" {
#endif

int prop_exist(const char *name);
int setprop(const char *name, const char *value);
int setprop2(const char *name, const char *value, const int trigger);
char *getprop(const char *name);
int deleteprop(const char *name, const int trigger);
int read_prop_file(const char* filename, const int trigger);
void getprop_all(void (*cbk)(const char *name));

#ifdef __cplusplus
}
#endif

#endif
