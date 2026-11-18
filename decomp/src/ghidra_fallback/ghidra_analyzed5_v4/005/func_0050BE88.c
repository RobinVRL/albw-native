#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int *DAT_0050bf98;
extern float DAT_0050bf9c;
extern int DAT_0050bfa0;
extern undefined4 DAT_0050bfa4;
extern int *DAT_0050bfa8;
extern int *DAT_0050bfac;
extern float DAT_0050bfb0;
extern undefined4 DAT_0050bfb4;

// USA 0050BE88 <- EU 0050BE60 (Ghidra, non-matching)
// GLOBAL DAT_0050bf98 int *
// GLOBAL DAT_0050bf9c float
// GLOBAL DAT_0050bfa0 int
// GLOBAL DAT_0050bfa4 undefined4
// GLOBAL DAT_0050bfa8 int *
// GLOBAL DAT_0050bfac int *
// GLOBAL DAT_0050bfb0 float
// GLOBAL DAT_0050bfb4 undefined4

undefined4 func_0050BE88(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar4 = DAT_0050bfa0;
  piVar5 = param_1 + 0x11f;
  iVar2 = param_1[0x109];
  if (((char)param_1[0x114] == '\0') || (param_1[0x11f] != iVar2)) {
    if (*(char *)((int)param_1 + 0x429) == '\0') {
      if ((char)param_1[0x10a] != '\0') {
        iVar4 = DAT_0050bfa8[3];
        if (iVar2 != *DAT_0050bfa8) {
          fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
          iVar4 = (int)-fVar6;
        }
        uVar3 = func_0051D2F4(piVar5,iVar4,DAT_0050bf98[-1],*DAT_0050bf98,DAT_0050bf9c);
        *(char *)((int)param_1 + 0x429) = (char)uVar3;
        return 0;
      }
      iVar2 = func_0051D2F4(piVar5,iVar2,DAT_0050bfac[-1],*DAT_0050bfac,DAT_0050bfb0);
      *(char *)(param_1 + 0x10a) = (char)iVar2;
      if (iVar2 != 0) {
        local_14 = DAT_0050bfb4;
        local_18 = iVar4;
        return func_00150A84(param_1,&local_18,0);
      }
    }
    else {
      cVar1 = *(char *)((int)param_1 + 0x42a);
      iVar2 = func_0051D2F4(piVar5,iVar2,DAT_0050bf98[-1],*DAT_0050bf98,DAT_0050bf9c);
      *(char *)((int)param_1 + 0x42a) = (char)iVar2;
      if ((iVar2 != 0) && (cVar1 == '\0')) {
        local_14 = DAT_0050bfa4;
        local_18 = iVar4;
        func_00150A84(param_1,&local_18,0);
      }
    }
  }
  return 0;
}

