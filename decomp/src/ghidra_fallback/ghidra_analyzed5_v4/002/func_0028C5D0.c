#include "ghidra_types.h"

extern int func_0028C788(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern float DAT_0028c748;
extern float DAT_0028c74c;
extern int DAT_0028c750;
extern float DAT_0028c754;
extern int DAT_0028c758;
extern float DAT_0028c75c;
extern undefined1 *DAT_0028c760;
extern int *DAT_0028c764;

// USA 0028C5D0 <- EU 0028C5F8 (Ghidra, non-matching)
// GLOBAL DAT_0028c748 float
// GLOBAL DAT_0028c74c float
// GLOBAL DAT_0028c750 int
// GLOBAL DAT_0028c754 float
// GLOBAL DAT_0028c758 int
// GLOBAL DAT_0028c75c float
// GLOBAL DAT_0028c760 undefined1 *
// GLOBAL DAT_0028c764 int *

void func_0028C5D0(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined1 *)(albw_frame + 0x0))
  #define local_1f (*(undefined1 *)(albw_frame + 0x1))
  #define local_1e (*(undefined1 *)(albw_frame + 0x2))
  #define local_1d (*(undefined1 *)(albw_frame + 0x3))
  #define local_1c (*(undefined1 *)(albw_frame + 0x4))
  #define local_1b (*(undefined1 *)(albw_frame + 0x5))
  #define local_1a (*(undefined1 *)(albw_frame + 0x6))
  #define local_19 (*(undefined1 *)(albw_frame + 0x7))
  if (*(char *)(param_1 + 0xcc) != '\0') {
    local_1c = *(undefined1 *)(DAT_0028c750 + 3);
    local_1b = *(undefined1 *)(DAT_0028c750 + 2);
    local_1a = *(undefined1 *)(DAT_0028c750 + 1);
    pfVar1 = (float *)(DAT_0028c758 + (*(uint *)(param_1 + 0xf4) >> 0x18) * 0x10);
    fVar5 = (float)VectorUnsignedToFloat
                             (*(uint *)(param_1 + 0xf4) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    uVar4 = VectorFloatToUnsigned
                      ((DAT_0028c74c + (*pfVar1 + pfVar1[1] * fVar5 * DAT_0028c754) * DAT_0028c748)
                       * DAT_0028c75c,3);
    local_19 = (undefined1)uVar4;
    func_0028C788(param_1,1);
    iVar2 = 0;
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 4);
    if (0 < iVar3) {
      do {
        func_004CF5DC(*(int *)(param_1 + 0x10),iVar2,2,(undefined4 *)&local_1c);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    iVar2 = 0;
    local_20 = DAT_0028c760[3];
    local_1f = DAT_0028c760[2];
    local_1e = DAT_0028c760[1];
    local_1d = *DAT_0028c760;
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 4);
    if (0 < iVar3) {
      do {
        func_004CF5DC(*(int *)(param_1 + 0x10),iVar2,1,(undefined4 *)&local_20);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    *(int *)(param_1 + 0xf4) = *DAT_0028c764 + *(int *)(param_1 + 0xf4);
  }
  return;
}

