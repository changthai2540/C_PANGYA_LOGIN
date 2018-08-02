# C_PANGYA_LOGIN

All you have to do is your crypt dll

```c++
void cdecl __encrypt(char* data, int key, int size, char** dataout, int newSize); /* We use dataout variable */
void cdecl __decrypt(char* data, int key, int size); /* We use data variable because the size is static */
```
