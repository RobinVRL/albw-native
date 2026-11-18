#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_001bce3c;
extern float DAT_001bce40;
extern float DAT_001bce44;
extern uint *DAT_001bce48;
extern uint *DAT_001bce4c;
extern int *DAT_001bce50;

// USA 001BCC5C <- EU 001BCC5C (Ghidra, non-matching)
// GLOBAL DAT_001bce3c int *
// GLOBAL DAT_001bce40 float
// GLOBAL DAT_001bce44 float
// GLOBAL DAT_001bce48 uint *
// GLOBAL DAT_001bce4c uint *
// GLOBAL DAT_001bce50 int *

void func_001BCC5C(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define local_2f8 (*(int *)(albw_frame + 0x8))
  #define local_2f4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2f0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_2e8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2d0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_2c8 (*(undefined1 *)(albw_frame + 0x38))
  #define local_2c6 (*(undefined2 *)(albw_frame + 0x3a))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x54))
  #define local_2a8 (*(undefined2 *)(albw_frame + 0x58))
  #define local_38 (*(undefined4 *)(albw_frame + 0x2c8))
  iVar7 = 0;
  iVar8 = *(int *)(param_1 + 0x620);
  iVar9 = *(int *)(param_1 + 0x61c);
  if ((0 < *(int *)(param_1 + 0x478)) &&
     ((*(short *)(param_1 + 0x36) == 0 || (bVar2 = func_00588BF0(param_1,0), !bVar2)))) {
    iVar3 = func_00588BE4(param_1);
    piVar1 = DAT_001bce3c;
    fVar12 = DAT_001bce40;
    if (iVar3 != *DAT_001bce3c) {
      fVar12 = DAT_001bce44;
    }
    puVar4 = (uint *)func_00520FC0();
    uVar14 = (ulonglong)*puVar4;
    fVar13 = ALBW_AS_F32(puVar4[2]);
    uVar6 = 0;
    if (iVar9 != 0) {
      do {
        pcVar5 = (char *)(iVar8 + iVar7 * 0x1c);
        if (*pcVar5 != '\x01') {
          if (uVar6 < *(uint *)(param_1 + 0x478)) {
            iVar3 = *(int *)(*(int *)(param_1 + 0x480) + uVar6 * 4);
          }
          else {
            iVar3 = 0;
          }
          fVar10 = *(float *)(iVar3 + 4) - ALBW_AS_F32(uVar14);
          fVar11 = *(float *)(iVar3 + 0xc) - fVar13;
          if (SQRT(fVar10 * fVar10 + fVar11 * fVar11) <= fVar12) {
            *pcVar5 = '\x01';
            local_2d8 = 0;
            local_2d4 = 0;
            local_2dc = 0;
            local_2b0 = 0;
            local_2ac = 0;
            local_38 = 0;
            func_002DFF7C(&local_2f8);
            iVar3 = func_00588BE4(param_1);
            if (iVar3 == *piVar1) {
              local_2f8 = func_0019B04C(*DAT_001bce48);
            }
            else {
              local_2f8 = func_0019B04C(*DAT_001bce4c);
            }
            iVar3 = iVar8 + iVar7 * 0x1c;
            local_2e8 = *(undefined4 *)(iVar3 + 0x10);
            local_2e4 = *(undefined4 *)(iVar3 + 0x14);
            local_2e0 = *(undefined4 *)(iVar3 + 0x18);
            local_2f4 = *(undefined4 *)(iVar3 + 4);
            local_2f0 = *(undefined4 *)(iVar3 + 8);
            local_2ec = *(undefined4 *)(iVar3 + 0xc);
            local_2a8 = *(undefined2 *)(param_1 + 0x54);
            local_2d0 = (undefined2)uVar6;
            local_2c8 = *(undefined1 *)(param_1 + 0x34);
            local_2c6 = *(undefined2 *)(param_1 + 0x36);
            local_2ac = *(undefined4 *)(param_1 + 0x2cc);
            func_004C4AF4(*DAT_001bce50,&local_2f8,0);
          }
        }
        iVar7 = iVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (iVar7 != iVar9);
    }
  }
  return;
}

