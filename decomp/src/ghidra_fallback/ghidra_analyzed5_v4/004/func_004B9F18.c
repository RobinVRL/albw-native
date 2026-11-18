#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_0054D978(int param_1,int param_2,uint param_3);
extern uint DAT_004ba21c;
extern undefined4 DAT_004ba220;
extern undefined4 DAT_004ba224;
extern undefined4 DAT_004ba228;
extern undefined4 *DAT_004ba22c;
extern int *DAT_004ba230;
extern undefined4 *DAT_004ba234;

// USA 004B9F18 <- EU 004B9EF0 (Ghidra, non-matching)
// GLOBAL DAT_004ba21c uint
// GLOBAL DAT_004ba220 undefined4
// GLOBAL DAT_004ba224 undefined4
// GLOBAL DAT_004ba228 undefined4
// GLOBAL DAT_004ba22c undefined4 *
// GLOBAL DAT_004ba230 int *
// GLOBAL DAT_004ba234 undefined4 *

void func_004B9F18(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(uint *)(albw_frame + 0x8))
  #define local_54 (*(int * *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(int *)(albw_frame + 0x1c))
  #define local_40 (*(uint * *)(albw_frame + 0x20))
  #define local_3c (*(int *)(albw_frame + 0x24))
  #define iStack_2c (*(int *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  uVar7 = 0;
  piVar8 = *(int **)(param_1 + 0x480);
  local_54 = piVar8 + *(int *)(param_1 + 0x478);
  if (piVar8 != local_54) {
    uVar14 = (ulonglong)DAT_004ba21c;
    local_50 = DAT_004ba220;
    local_4c = DAT_004ba224;
    local_48 = DAT_004ba228;
    local_44 = param_1 + 0x200;
    local_40 = (uint *)(param_1 + 0x478);
    local_3c = param_1 + 0x400;
    iStack_2c = param_1;
    local_28 = param_2;
    do {
      piVar2 = func_0054D978(*(int *)(param_1 + 0x2d0) + 0x18,local_28,0);
      iVar5 = *piVar8;
      iVar11 = *(int *)(iVar5 + 0xc);
      iVar12 = *(int *)(iVar5 + 4);
      fVar13 = *(float *)(iVar5 + 8);
      *(float *)(local_3c + 0x21c) = ALBW_AS_F32(uVar14);
      piVar2[3] = iVar11;
      piVar2[1] = iVar12;
      piVar2[2] = (int)ALBW_AS_U32((fVar13 + ALBW_AS_F32(uVar14)));
      func_004356B4(piVar2);
      if (uVar7 < *(uint *)(param_1 + 0x620)) {
        iVar5 = *(int *)(param_1 + 0x624) + uVar7 * 0x104;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x624);
      }
      if (uVar7 < *local_40) {
        iVar11 = *(int *)(local_40[2] + uVar7 * 4);
      }
      else {
        iVar11 = 0;
      }
      *(int **)(iVar5 + 0x10) = piVar2;
      piVar2[0xb] = piVar2[0xb] & 0xfffff8ffU | 0x1000381;
      if (*(char *)(iVar5 + 0x102) == '\0') {
        sVar1 = *(short *)(iVar11 + 0x2c);
        sVar9 = *(short *)(param_1 + 0x54);
        *(undefined1 *)(iVar5 + 0x102) = 1;
        *(int **)(iVar5 + 0x24) = piVar2;
        local_58 = *(uint *)(param_1 + 0x2cc);
        if (sVar1 == 1) {
          sVar9 = -1;
        }
        func_004EDEA0(iVar5 + 0x14,&local_58);
        *(uint *)(iVar5 + 0x4c) = uVar7;
        *(short *)(iVar5 + 0x2c) = sVar9;
        *(undefined1 *)(iVar5 + 0x35) = 0;
        *(undefined1 *)(iVar5 + 0x36) = 0;
        *(undefined2 *)(iVar5 + 0x44) = 0;
        *(int **)(iVar5 + 0x90) = piVar2;
        local_58 = *(uint *)(local_44 + 0xcc);
        func_004EDAD0(iVar5 + 0x78,&local_58);
        uVar6 = *DAT_004ba22c;
        uVar10 = DAT_004ba22c[1];
        *(int *)(iVar5 + 0xd8) = iVar5;
        *(undefined4 *)(iVar5 + 0xdc) = uVar6;
        *(undefined4 *)(iVar5 + 0xe0) = uVar10;
        *(int *)(iVar5 + 0xa0) = iVar5 + 0xd4;
        *(short *)(iVar5 + 0xa4) = sVar9;
        puVar3 = (undefined4 *)func_0010BAB4(0x48);
        puVar4 = (undefined4 *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = func_0034CAA0(puVar3);
        }
        piVar2 = DAT_004ba230;
        *(undefined4 **)(iVar5 + 0xc0) = puVar4;
        func_004A8BFC(*piVar2,iVar5 + 0x14,0xd);
        iVar12 = *piVar2;
        if (sVar9 == -1) {
          func_004A7F00(iVar12,iVar5 + 0x78,2);
        }
        else {
          func_004A879C(iVar12,iVar5 + 0x78,2);
        }
      }
      if (uVar7 < *(uint *)(param_1 + 0x604)) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar7 * 4);
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)(iVar5 + 8) = uVar6;
      uVar6 = *(undefined4 *)(iVar11 + 8);
      uVar10 = *(undefined4 *)(iVar11 + 4);
      *(undefined4 *)(iVar5 + 0xf0) = *(undefined4 *)(iVar11 + 0xc);
      *(undefined4 *)(iVar5 + 0xec) = uVar6;
      *(undefined4 *)(iVar5 + 0xe8) = uVar10;
      if (*(short *)(iVar11 + 0x2a) == 0xb) {
        puVar3 = (undefined4 *)func_0010BAB4(0x44);
        puVar4 = (undefined4 *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = func_0010CE7C(puVar3);
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = puVar4;
          puVar4[7] = 0;
          puVar4[8] = 0;
          *(undefined1 *)(puVar4 + 0xe) = 0;
          *puVar4 = local_50;
          uVar6 = *DAT_004ba234;
          uVar10 = DAT_004ba234[1];
          puVar3 = puVar4 + 9;
          if (puVar3 != (undefined4 *)0x0) {
            puVar4[10] = puVar4;
            puVar4[0xb] = uVar6;
            puVar4[0xc] = uVar10;
            *puVar3 = local_4c;
          }
          puVar4[8] = puVar3;
          *puVar4 = local_48;
          puVar4[0xf] = 0;
          puVar4[0x10] = 0;
        }
        *(undefined4 **)(iVar5 + 0xc) = puVar4;
        piVar2 = *(int **)(iVar5 + 8);
        puVar4[0xf] = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(piVar2[0x14] + 4) + 0x30) + 0x24) + 4);
        puVar4[0x10] = 0;
        func_004CE68C((int)piVar2,0,*(int *)(iVar5 + 0xc));
        (**(code **)(*piVar2 + 0x10))(piVar2,*(char *)((int)piVar2 + 0x16a) + '\x01');
      }
      piVar8 = piVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (piVar8 != local_54);
  }
  return;
}

