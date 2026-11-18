#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003178B4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4, int param_5,undefined4 *param_6,int param_7);
extern float func_0054F764(undefined4 *param_1,uint param_2,uint *param_3);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern int func_0068B190(int *param_1,int param_2,undefined2 param_3);
extern int func_0068C690(float *param_1);

// USA 002EEDBC <- EU 002EED98 (Ghidra, non-matching)

void func_002EEDBC(int param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(int *)(albw_frame + 0x0))
  #define local_9c (*(undefined4 *)(albw_frame + 0x4))
  #define local_98 (*(int * *)(albw_frame + 0x8))
  #define local_94 (*(int * *)(albw_frame + 0xc))
  #define local_90 (*(int * *)(albw_frame + 0x10))
  #define local_8c ((int *)(albw_frame + 0x14))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define auStack_64 ((undefined1 *)(albw_frame + 0x3c))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(uint *)(albw_frame + 0x5c))
  #define afStack_40 ((float *)(albw_frame + 0x60))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x70))
  #define local_2c (*(undefined4 *)(albw_frame + 0x74))
  #define local_28 (*(undefined4 *)(albw_frame + 0x78))
  #define local_24 ((undefined4 *)(albw_frame + 0x7c))
  func_00115C70(afStack_40,(float *)(param_1 + 0xe30),param_2);
  iVar1 = func_0068C690(afStack_40);
  func_0054F764((undefined4 *)(param_1 + 0xe30),iVar1,&local_44);
  local_94 = local_8c;
  iVar1 = 0;
  iVar3 = 4;
  local_a0 = 0;
  local_9c = 0;
  local_98 = (int *)0x0;
  do {
    iVar3 = iVar3 + -1;
    local_94[iVar1] = (int)(local_94 + iVar1 + 2);
    iVar1 = iVar1 + 2;
  } while (iVar3 != 0);
  uStack_6c = 0;
  local_90 = local_94;
  func_0010B3EC(&local_a0,5,(int)auStack_64);
  if (*(byte *)(param_1 + 0xd48) < 2) {
    func_0068B190(&local_a0,0,7);
    func_0068B190(&local_a0,4,7);
    func_0068B190(&local_a0,8,7);
  }
  else if (*(byte *)(param_1 + 0xd48) == 2) {
    func_0068B190(&local_a0,2,7);
    func_0068B190(&local_a0,4,7);
    func_0068B190(&local_a0,8,7);
    func_0068B190(&local_a0,10,7);
    func_0068B190(&local_a0,0,7);
  }
  iVar1 = *(int *)(param_1 + 0xe3c);
  piVar6 = local_98 + local_a0;
  for (piVar4 = local_98; piVar4 != piVar6; piVar4 = piVar4 + 1) {
    uVar5 = *(int *)*piVar4 + local_44;
    if (iVar1 <= (int)uVar5) {
      uVar5 = uVar5 - iVar1;
    }
    puVar2 = (undefined4 *)func_0054F9E4(param_1 + 0xe30,uVar5);
    local_34 = *puVar2;
    uStack_30 = puVar2[1];
    local_2c = puVar2[2];
    local_24[0] = func_0054FAC0(param_1 + 0xe30,uVar5);
    local_28 = *(undefined4 *)(param_1 + 0x2cc);
    local_48 = 0;
    func_003178B4(&local_34,local_24,&local_28,(int)*(short *)(*piVar4 + 4),0,&local_48,0);
  }
  return;
}

