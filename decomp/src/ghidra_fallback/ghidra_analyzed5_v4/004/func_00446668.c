#include "ghidra_types.h"

extern int func_00455564(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,float fparam_0, float fparam_1);
extern int func_004557A0(int param_1,int param_2);
extern int func_00455B5C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0051AB94(int param_1,int param_2,int param_3);
extern int func_0058FBB8(undefined4 *param_1,undefined4 *param_2);
extern int *DAT_004467ec;
extern int *DAT_004467f0;
extern uint DAT_004467f4;
extern uint DAT_004467f8;

// USA 00446668 <- EU 00446640 (Ghidra, non-matching)
// GLOBAL DAT_004467ec int *
// GLOBAL DAT_004467f0 int *
// GLOBAL DAT_004467f4 uint
// GLOBAL DAT_004467f8 uint

void func_00446668(int param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int in_r3;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(short *)(albw_frame + 0x8))
  #define local_36 (*(short *)(albw_frame + 0xa))
  #define local_34 (*(byte *)(albw_frame + 0xc))
  piVar3 = DAT_004467f0;
  if (*DAT_004467ec == 0) {
    return;
  }
  uVar4 = (uint)*(char *)(*DAT_004467ec + 0x18);
  bVar14 = 4 < uVar4;
  bVar13 = uVar4 == 5;
  if (5 < uVar4) {
    bVar14 = 3 < uVar4 - 0x16;
    bVar13 = uVar4 - 0x16 == 4;
  }
  if (bVar14 && !bVar13) {
    return;
  }
  uVar11 = 1;
  if (uVar4 != 10) {
    if ((int)uVar4 < 10) {
      if ((uVar4 == 0 || uVar4 == 2) || (uVar4 == 4 || uVar4 == 9)) goto LAB_004466a0;
    }
    else if ((uVar4 == 0xb || uVar4 == 0xc) || (uVar4 == 0x12 || uVar4 == 0x16)) goto LAB_004466a0;
    uVar11 = 0;
  }
LAB_004466a0:
  uVar4 = 0;
  uVar17 = (ulonglong)DAT_004467f4;
  if (*(char *)(param_1 + 0x244) != '\0') {
    uVar11 = uVar11 ^ 1;
  }
  do {
    uVar9 = uVar4;
    puVar5 = (undefined4 *)func_0051AB94(*piVar3,uVar11,uVar4);
    func_0058FBB8((undefined4 *)&local_38,puVar5);
    uVar8 = (uint)local_34;
    if (uVar8 < 4) {
      iVar10 = (int)local_38;
      fVar15 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = ALBW_AS_F32(uVar17);
      uVar1 = in_fpscr & 0xfffffff;
      uVar9 = uVar1 | (uint)(fVar15 < fVar16) << 0x1f | (uint)(fVar15 == fVar16) << 0x1e;
      in_fpscr = uVar9 | (uint)(NAN(fVar15) || NAN(fVar16)) << 0x1c;
      bVar2 = (byte)(uVar9 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar15 = -fVar15;
      }
      uVar9 = DAT_004467f8;
      if ((int)DAT_004467f8 < (int)ALBW_AS_U32(fVar15)) goto LAB_004467ac;
      iVar12 = (int)local_36;
      fVar15 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = uVar1 | (uint)(fVar15 < fVar16) << 0x1f | (uint)(fVar15 == fVar16) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar15) || NAN(fVar16)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar15 = -fVar15;
      }
      if ((int)DAT_004467f8 < (int)ALBW_AS_U32(fVar15)) goto LAB_004467ac;
      if (uVar8 == 0) goto LAB_004467b8;
      uVar9 = *(uint *)(param_1 + 0x1ac);
      if (uVar4 < uVar9) {
        uVar9 = *(uint *)(param_1 + 0x1b4);
        iVar6 = *(int *)(uVar9 + uVar4 * 4);
      }
      else {
        iVar6 = 0;
      }
      func_004557A0(iVar6,uVar8);
      uVar8 = *(uint *)(param_1 + 0x1ac);
      fVar16 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar15 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      if (uVar4 < uVar8) {
        uVar8 = *(uint *)(param_1 + 0x1b4);
        piVar7 = *(int **)(uVar8 + uVar4 * 4);
      }
      else {
        piVar7 = (int *)0x0;
      }
      func_00455564(piVar7,uVar8,uVar9,in_r3,fVar15,fVar16);
    }
    else {
LAB_004467ac:
      local_38 = 0;
      local_34 = 0;
      local_36 = 0;
LAB_004467b8:
      uVar8 = *(uint *)(param_1 + 0x1ac);
      if (uVar4 < uVar8) {
        uVar8 = *(uint *)(param_1 + 0x1b4);
        piVar7 = *(int **)(uVar8 + uVar4 * 4);
      }
      else {
        piVar7 = (int *)0x0;
      }
      func_00455B5C(piVar7,uVar8,uVar9,in_r3);
    }
    uVar4 = uVar4 + 1;
    if (0x13 < (int)uVar4) {
      return;
    }
  } while( true );
}

