#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00231340(short *param_1);
extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0031BEC0(int param_1,int param_2);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_0047a450;
extern float DAT_0047a454;
extern undefined4 DAT_0047a458;
extern float DAT_0047a45c;

// USA 0047A260 <- EU 0047A238 (Ghidra, non-matching)
// GLOBAL DAT_0047a450 int *
// GLOBAL DAT_0047a454 float
// GLOBAL DAT_0047a458 undefined4
// GLOBAL DAT_0047a45c float

undefined4 func_0047A260(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  int *piVar6;
  bool bVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  piVar2 = DAT_0047a450;
  if (0x13 < param_2) {
    return func_0012C790(param_1 + 0x21c);
  }
  piVar6 = (int *)(param_1 + 0x168 + param_2 * 4);
  iVar3 = *piVar6;
  uVar5 = (uint)*(byte *)(iVar3 + 0xe1);
  if (uVar5 != 0) {
    iVar3 = (int)*(char *)(iVar3 + 0x3c);
  }
  if ((uVar5 == 0 || iVar3 == 2) || iVar3 == 3) {
LAB_0047a2c0:
    iVar3 = 3;
  }
  else if ((*DAT_0047a450 == 0) ||
          (iVar3 = func_0055696C(*DAT_0047a450,0x27), uVar5 = extraout_r1, iVar3 == 0)) {
    if ((*piVar2 == 0) || (iVar3 = func_0055696C(*piVar2,0xc), uVar5 = extraout_r1_00, iVar3 == 0))
    goto LAB_0047a2c0;
    iVar3 = 2;
  }
  else {
    iVar3 = 0;
  }
  iVar4 = *(int *)(**(int **)(*piVar6 + 0x1c) + 0x10);
  uVar8 = *(undefined4 *)(iVar4 + 0x54);
  fVar9 = *(float *)(iVar4 + 100) + DAT_0047a454;
  func_001B6C2C((int *)(param_1 + 0x21c),uVar5,param_3,param_4);
  local_28 = DAT_0047a458;
  local_30 = uVar8;
  fStack_2c = fVar9;
  func_003FFE6C(*(int *)(**(int **)(param_1 + 0x238) + 0x10),&local_30);
  fVar9 = DAT_0047a45c;
  *(byte *)(*(int *)(param_1 + 0x238) + 0x70) = *(byte *)(*(int *)(param_1 + 0x238) + 0x70) | 2;
  *(char *)(param_1 + 0x294) = (char)iVar3;
  if (*(char *)(param_1 + 0x295) == '\0' || iVar3 == 3) {
    func_00231448(param_1 + 0x278);
    func_00167E04(*(int *)(param_1 + 0x238),*(int *)(param_1 + 0x290),0);
    if (iVar3 == 3) {
      func_00231448(param_1 + 0x260);
      if ((*(ushort *)(param_1 + 0x254) & 0xff) == 0) {
        *(undefined2 *)(param_1 + 0x254) = 2;
      }
      func_002317C0((undefined2 *)(param_1 + 0x254),fVar9);
      func_00231340((short *)(param_1 + 0x254));
      goto LAB_0047a3e8;
    }
  }
  else {
    func_002317C0((undefined2 *)(param_1 + 0x278),fVar9);
  }
  if ((*(ushort *)(param_1 + 0x254) & 0xff) == 2) {
    *(undefined2 *)(param_1 + 0x254) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x254),fVar9);
  }
  fVar9 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  func_002316CC(param_1 + 0x260,fVar9);
LAB_0047a3e8:
  iVar3 = *piVar6;
  *(undefined1 *)(iVar3 + 0xe3) = 1;
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if ((!bVar7 || cVar1 != '\0') && (*(char *)(iVar3 + 0x3c) == '\0')) {
    func_00231524(iVar3 + 200);
    return func_0031BEC0(iVar3 + 0x78,1);
  }
  return 0;
}

