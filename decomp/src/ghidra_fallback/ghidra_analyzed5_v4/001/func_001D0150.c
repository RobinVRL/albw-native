// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00539200(int param_1);
extern int DAT_001d0234;
extern char s_SE_Kokko_WING_001d0224[];

// USA 001D0150 <- EU 001D0150 (Ghidra, non-matching)
// GLOBAL DAT_001d0234 int
// GLOBAL s_SE_Kokko_WING_001d0224 string

undefined4 func_001D0150(int *param_1,int param_2,float fparam_0,float fparam_1)

{
  bool bVar1;
  int iVar2;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  if (**(int **)(param_1[0x13e] + 0x14) == param_2) {
    iVar2 = (*(int **)(param_1[0x13e] + 0x14))[2];
    if (*(char *)((int)param_1 + 0x5de) == '\0') {
      if (iVar2 < 0x40000000) {
        fparam_0_00 = fparam_1;
        func_0010A464(auStack_78);
        local_14 = s_SE_Kokko_WING_001d0224;
        local_18 = DAT_001d0234;
        func_00150A84(param_1,&local_18,(int)auStack_78);
        bVar1 = func_00539200((int)auStack_78);
        if (bVar1) {
          func_0025B860((int)auStack_78,0,fparam_0,fparam_1);
          func_0025B824((int)auStack_78,fparam_0_00);
        }
        *(undefined1 *)((int)param_1 + 0x5de) = 1;
        return func_0025B874(auStack_78);
      }
    }
    else if (0x3fffffff < iVar2) {
      *(undefined1 *)((int)param_1 + 0x5de) = 0;
    }
  }
  return 0;
}

