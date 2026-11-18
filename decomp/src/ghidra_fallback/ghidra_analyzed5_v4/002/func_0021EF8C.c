// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_004F68AC();
extern int func_00556E64(int param_1);
extern int DAT_0021f054;
extern int *DAT_0021f058;
extern int *DAT_0021f05c;
extern float DAT_0021f060;

// USA 0021EF8C <- EU 0021EF8C (Ghidra, non-matching)
// GLOBAL DAT_0021f054 int
// GLOBAL DAT_0021f058 int *
// GLOBAL DAT_0021f05c int *
// GLOBAL DAT_0021f060 float

undefined4 func_0021EF8C(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define pfStack_10 (*(float * *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 0xafd) == '\0') {
    return func_004F68AC(param_1,param_2,param_3,param_4);
  }
  cVar1 = *(char *)(DAT_0021f054 + param_1);
  if ((cVar1 != '\0' && cVar1 != '\x02') && (cVar1 != '\x03' && cVar1 != '\x04')) {
    if ((*DAT_0021f058 != 0) && (bVar2 = func_00556E64(*DAT_0021f058), !bVar2)) {
      if (*DAT_0021f05c == 0) {
        return 0;
      }
      iVar3 = *(int *)(*DAT_0021f05c + 0x18);
      if (iVar3 != 0) {
        local_18 = *(undefined4 *)(param_1 + 0x3d0);
        param_4 = *(float **)(param_1 + 0x3d8);
        param_3 = 1;
        local_14 = *(float *)(param_1 + 0xc) + DAT_0021f060;
        pfStack_10 = param_4;
        func_001E8440(iVar3,&local_18,1);
      }
    }
    return func_004F68AC(param_1,param_2,param_3,param_4);
  }
  return 0;
}

