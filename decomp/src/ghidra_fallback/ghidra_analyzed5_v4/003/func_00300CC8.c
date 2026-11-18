#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_003011EC(int param_1);
extern uint DAT_00300de8;
extern undefined4 DAT_00300dec;
extern undefined4 DAT_00300df0;
extern uint DAT_00300df4;
extern int *DAT_00300e04;
extern char s_animator_00300df8[];

// USA 00300CC8 <- EU 00300CA4 (Ghidra, non-matching)
// GLOBAL DAT_00300de8 uint
// GLOBAL DAT_00300dec undefined4
// GLOBAL DAT_00300df0 undefined4
// GLOBAL DAT_00300df4 uint
// GLOBAL DAT_00300e04 int *
// GLOBAL s_animator_00300df8 string

undefined4 func_00300CC8(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  undefined8 uVar8;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 ((uint *)(albw_frame + 0x0))
  #define local_98 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_94 (*(undefined4 *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(uint *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(undefined1 *)(albw_frame + 0x58))
  #define local_40 (*(uint *)(albw_frame + 0x60))
  #define local_3c (*(char * *)(albw_frame + 0x64))
  uVar1 = DAT_00300df4;
  iVar5 = 0;
  iVar7 = param_1[0xb4];
  uVar9 = (ulonglong)DAT_00300de8;
  uVar8 = CONCAT44(DAT_00300df0,DAT_00300dec);
  do {
    puVar3 = (undefined4 *)func_0010BAB4(0xa8);
    piVar2 = DAT_00300e04;
    puVar4 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      if (iVar7 == 0) {
        local_3c = s_animator_00300df8;
      }
      else {
        (**(code **)(*DAT_00300e04 + 8))(DAT_00300e04);
        local_3c = (char *)piVar2[1];
      }
      local_40 = uVar1;
      puVar4 = func_0016A2FC(puVar3,1,&local_40,1);
    }
    param_1[iVar5 + 0x18c] = (int)puVar4;
    iVar6 = *(int *)(iVar7 + 0x1c8);
    (**(code **)(*param_1 + 0x6c))(&local_40,param_1);
    func_00169608((uint *)param_1[iVar5 + 0x18c],0,(int *)&local_40,iVar6);
    func_0016A02C(param_1[iVar5 + 0x18c],-1,(int *)0xffffffff,0);
    local_a0[1] = 3;
    local_98 = &local_94;
    uStack_84 = (undefined4)uVar8;
    local_90 = ALBW_AS_U32(VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3));
    uStack_8c = (undefined4)uVar9;
    uStack_88 = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_a0[0] = 1;
    local_48 = 0;
    local_94 = 0;
    local_80 = uVar1 | 0xff;
    local_4c = 0;
    func_0016898C(param_1[iVar5 + 0x18c],local_a0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return func_003011EC((int)param_1);
}

