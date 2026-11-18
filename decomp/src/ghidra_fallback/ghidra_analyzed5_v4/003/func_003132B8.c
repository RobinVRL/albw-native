#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00583B1C(int param_1);
extern int DAT_0031333c;
extern float DAT_00313340;

// USA 003132B8 <- EU 00313294 (Ghidra, non-matching)
// GLOBAL DAT_0031333c int
// GLOBAL DAT_00313340 float

undefined4 func_003132B8(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  if ((char)param_1[0x262] == '\0') {
    func_00115C70(local_18,(float *)(param_1 + 0x285),(float *)(param_1 + 0xf4));
    iVar1 = func_004904CC(local_18[0],local_10);
    iVar1 = func_0051D2F4(param_1 + 0xfa,iVar1,DAT_0031333c,0x7fffffff,DAT_00313340);
    if (iVar1 != 0) {
      *(char *)(param_1 + 0x262) = (char)param_1[0x262] + '\x01';
    }
  }
  else if (((char)param_1[0x262] == '\x01') && (iVar1 = func_00583B1C((int)param_1), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003132e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0xac))(param_1,5,0xffffffff);
  }
  return 0;
}

