#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00293F34(int param_1);
extern int func_002FCC74(int *param_1,undefined2 param_2);
extern int func_0036B76C(int param_1);
extern int func_0036C0B0(int param_1);
extern int func_004F95A0(int param_1,int param_2);
extern int DAT_0036bbfc;
extern int *DAT_0036bc28;
extern int DAT_0036bc2c;
extern int *DAT_0036bc30;
extern char s_SE_EN_BOSS_DIE_FX_0036bc34[];
extern char s_SE_EN_BOSS_LAST_DAMAGE_0036bc10[];
extern char s_SE_EN_DAMAGE_0036bc00[];

// USA 0036BA50 <- EU 0036BA2C (Ghidra, non-matching)
// GLOBAL DAT_0036bbfc int
// GLOBAL DAT_0036bc28 int *
// GLOBAL DAT_0036bc2c int
// GLOBAL DAT_0036bc30 int *
// GLOBAL s_SE_EN_BOSS_DIE_FX_0036bc34 string
// GLOBAL s_SE_EN_BOSS_LAST_DAMAGE_0036bc10 string
// GLOBAL s_SE_EN_DAMAGE_0036bc00 string

void func_0036BA50(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define iStack_48 (*(int *)(albw_frame + 0x8))
  #define iStack_44 (*(int *)(albw_frame + 0xc))
  #define iStack_40 (*(int *)(albw_frame + 0x10))
  #define iStack_3c (*(int *)(albw_frame + 0x14))
  #define iStack_38 (*(int *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define afStack_24 ((float *)(albw_frame + 0x2c))
  iVar4 = DAT_0036bbfc;
  iVar2 = *(int *)(param_1 + 0xec);
  if (iVar2 != 1) {
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x18);
        piVar3 = (int *)(DAT_0036bc2c + (*(uint *)(param_1 + 0x18) & 0xff) * 0x2c);
        local_50 = *piVar3;
        local_4c = (char *)piVar3[1];
        iStack_48 = piVar3[2];
        iStack_44 = piVar3[3];
        iStack_40 = piVar3[4];
        iStack_3c = piVar3[5];
        iStack_38 = piVar3[6];
        fStack_34 = ALBW_AS_F32(piVar3[7]);
        local_28 = piVar3[10];
        local_30 = piVar3[8];
        iStack_2c = piVar3[9];
        if (-1 < *(int *)(param_1 + 0x20)) {
          uVar1 = (uint)local_28 >> 0x10;
          local_28 = CONCAT22((short)uVar1,(short)*(int *)(param_1 + 0x20));
        }
        func_00115C54(afStack_24,(float *)(*(int *)(param_1 + 4) + 0x3d0),&fStack_34);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0;
        *(int *)(*(int *)(param_1 + 0xc) + 0x18) = param_1 + 0xa4;
        iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x34))
                          (*(int **)(param_1 + 0xc),afStack_24,&local_50,0);
        if (iVar2 != 0) {
          func_0036B76C(param_1);
          if (*DAT_0036bc30 != 0) {
            *(undefined1 *)(*DAT_0036bc30 + 0xa1) = 1;
          }
          *(undefined4 *)(param_1 + 0xec) = 4;
          local_4c = s_SE_EN_BOSS_DIE_FX_0036bc34;
          local_50 = iVar4;
          func_00150A84(*(int **)(param_1 + 4),&local_50,0);
        }
      }
      goto LAB_0036bbd8;
    }
    bVar5 = *(char *)(param_1 + 0xf9) == '\0';
    iVar2 = 0;
    if (!bVar5) {
      iVar2 = *(int *)(param_1 + 8);
    }
    if ((bVar5 || iVar2 == 0) || (0 < *(short *)(iVar2 + 0x508))) goto LAB_0036bbd8;
  }
  iVar2 = func_002FCC74(*(int **)(param_1 + 0x10),0x1e);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      func_004F95A0(*(int *)(param_1 + 8),0);
    }
    *(undefined4 *)(param_1 + 0xec) = 2;
    local_4c = s_SE_EN_DAMAGE_0036bc00;
    local_50 = iVar4;
    func_001509A4(*(int *)(param_1 + 4),&local_50,0);
    local_4c = s_SE_EN_BOSS_LAST_DAMAGE_0036bc10;
    local_50 = iVar4;
    func_00150A84(*(int **)(param_1 + 4),&local_50,0);
    func_00293F34(*DAT_0036bc28);
  }
LAB_0036bbd8:
  if ((*(int *)(param_1 + 0xf0) == 1) && (iVar4 = func_0036C0B0(param_1), iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0xf0) = 2;
  }
  return;
}

