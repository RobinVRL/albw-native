#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_00530290(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00691884(int *param_1,int *param_2);
extern int DAT_00583ad0;
extern int *DAT_00583ad4;
extern int *DAT_00583ad8;
extern int DAT_00583ae4;
extern undefined4 DAT_00583ae8;
extern undefined4 DAT_00583aec;
extern int *DAT_00583af0;
extern char s_Invalid_00583adc[];

// USA 005839C4 <- EU 0058399C (Ghidra, non-matching)
// GLOBAL DAT_00583ad0 int
// GLOBAL DAT_00583ad4 int *
// GLOBAL DAT_00583ad8 int *
// GLOBAL DAT_00583ae4 int
// GLOBAL DAT_00583ae8 undefined4
// GLOBAL DAT_00583aec undefined4
// GLOBAL DAT_00583af0 int *
// GLOBAL s_Invalid_00583adc string

undefined4 func_005839C4(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  cVar2 = func_00530290(param_1);
  if (((cVar2 != '\0') && (*(char *)(param_1 + 0x860) == '\0')) &&
     (*(char *)(param_1 + 0x85e) == '\0')) {
    if (((*(uint *)(DAT_00583ad0 + 8) & 1) == 0) &&
       (iVar3 = func_00100174(DAT_00583ad4), piVar1 = DAT_00583ad8, iVar3 != 0)) {
      *DAT_00583ad8 = DAT_00583ae4;
      piVar1[1] = (int)s_Invalid_00583adc;
    }
    if (((*(int **)(param_1 + 0x2c0) != (int *)0x0) &&
        (iVar3 = func_00691884(*(int **)(param_1 + 0x2c0),DAT_00583ad8), iVar3 == 0)) &&
       ((*(uint *)(param_1 + 0x8ac) & 8) != 0)) {
      pfVar4 = (float *)func_00520FC0();
      func_00115C70(local_1c,pfVar4,(float *)(param_1 + 0x3d0));
      iVar3 = func_004904CC(local_1c[0],local_14);
      local_20 = iVar3 - *(int *)(param_1 + 1000);
      uVar5 = func_0058E2B8(&local_20);
      if (uVar5 < *(uint *)(param_1 + 0x8f4)) {
        if (*DAT_00583af0 != 0) {
          local_28[0] = (iVar3 + -0x80000000) - **(int **)(*DAT_00583af0 + 0x24);
          uVar5 = func_0058E2B8(local_28);
          if (uVar5 < 0x40000000) {
            return 0xb;
          }
        }
      }
    }
  }
  return 0;
}

