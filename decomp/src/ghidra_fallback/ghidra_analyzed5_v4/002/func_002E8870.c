#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0033C1B4(int *param_1);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_002e8a74;
extern float DAT_002e8a78;
extern int *DAT_002e8a7c;
extern char s_Barrier_002e8a6c[];

// USA 002E8870 <- EU 002E884C (Ghidra, non-matching)
// GLOBAL DAT_002e8a74 float
// GLOBAL DAT_002e8a78 float
// GLOBAL DAT_002e8a7c int *
// GLOBAL s_Barrier_002e8a6c string

undefined4 func_002E8870(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_9c (*(float *)(albw_frame + 0x4))
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define iStack_94 (*(int *)(albw_frame + 0xc))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define uStack_8c (*(uint *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define afStack_84 ((float *)(albw_frame + 0x1c))
  #define afStack_78 ((float *)(albw_frame + 0x28))
  if ((char)param_2[0x104] == '\x04') {
    return 0;
  }
  local_9c = ALBW_AS_F32(param_2[0xf4]);
  local_98 = ALBW_AS_F32(param_2[0xf5]);
  iStack_94 = param_2[0xf6];
  func_00115C70(afStack_84,&local_9c,(float *)(param_1 + 0xe30));
  iVar2 = func_0068C690(afStack_84);
  if ((*(int *)(param_1 + 0x344) != 0) &&
     (func_004A1B9C((int *)&local_90,*(int *)(param_1 + 0x344),(uint *)s_Barrier_002e8a6c),
     uVar1 = uStack_8c, uVar3 = local_90, local_90 != 0)) {
    local_98 = local_98 + DAT_002e8a74;
    func_004D8054(&local_9c,iVar2 + 0x80000000U,DAT_002e8a78);
    local_88 = 0;
    local_90 = 10;
    uStack_8c = iVar2 + 0x80000000U;
    func_0049216C(afStack_78,&local_90,&local_9c);
    if ((uVar3 != 0) && (*(uint *)(uVar3 + 0x1c) == uVar1)) {
      func_004A2D1C(uVar3,afStack_78);
    }
  }
  func_0033C1B4(param_2);
  switch(**(undefined4 **)(*(int *)(param_1 + 0xdb4) + 0x14)) {
  case 0:
  case 3:
  case 6:
    if (*(char *)(param_1 + 0x8cc) != '\x17') {
      puVar4 = (uint *)func_002C11E8((int *)afStack_78,3,0,0);
      func_0016898C(*(int *)(param_1 + 0xdb4),puVar4);
      break;
    }
    uVar3 = func_00111A64((uint *)(*DAT_002e8a7c + 0x660));
    if (0x31 < (uint)((ulonglong)uVar3 * 100 >> 0x20)) goto switchD_002e8940_caseD_7;
  case 8:
    puVar4 = (uint *)func_002C11E8((int *)afStack_78,7,0,0);
    func_0016898C(*(int *)(param_1 + 0xdb4),puVar4);
    break;
  case 4:
    puVar4 = (uint *)func_002C11E8((int *)afStack_78,5,0,0);
    func_0016898C(*(int *)(param_1 + 0xdb4),puVar4);
    break;
  case 7:
switchD_002e8940_caseD_7:
    puVar4 = (uint *)func_002C11E8((int *)afStack_78,8,0,0);
    func_0016898C(*(int *)(param_1 + 0xdb4),puVar4);
  }
  if (*(int *)(param_1 + 0xca0) == param_2[0xb3]) {
    *(undefined4 *)(param_1 + 0xca0) = 0;
  }
  *(undefined1 *)(param_1 + 0xd44) = 1;
  return 1;
}

