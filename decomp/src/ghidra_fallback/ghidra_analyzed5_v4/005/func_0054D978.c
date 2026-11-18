#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00435714(undefined4 *param_1);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern float func_0054DE54(int param_1,int param_2,uint param_3,int param_4);
extern short *DAT_0054dd08;
extern float *DAT_0054dd0c;
extern float DAT_0054dd10;

// USA 0054D978 <- EU 0054D950 (Ghidra, non-matching)
// GLOBAL DAT_0054dd08 short *
// GLOBAL DAT_0054dd0c float *
// GLOBAL DAT_0054dd10 float

int * func_0054D978(int param_1,int param_2,uint param_3)

{
  float *pfVar1;
  int *piVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(int *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define fStack_68 (*(float *)(albw_frame + 0x38))
  #define fStack_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(uint *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define fStack_58 (*(float *)(albw_frame + 0x48))
  #define fStack_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(float *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define iStack_44 (*(int *)(albw_frame + 0x5c))
  #define iStack_40 (*(int *)(albw_frame + 0x60))
  psVar3 = DAT_0054dd08;
  if (param_3 < 4) {
    psVar3 = (short *)(param_1 + param_3 * 0x10 + 0x20);
  }
  local_60 = (uint)*psVar3;
  piVar2 = func_00435714(&local_60);
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_2 + 0x48) == 5 || *(int *)(param_2 + 0x48) == 6) {
      local_98 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&local_98 + 2)),0x224));
      local_90 = 7.67912e-43;
      *(undefined2 *)(piVar2 + 10) = 0x224;
    }
    local_88 = *(float *)(param_2 + 4);
    local_84 = *(float *)(param_2 + 8);
    local_80 = *(int *)(param_2 + 0xc);
    local_60 = (uint)*(ushort *)(piVar2 + 0x15);
    switch(local_60) {
    case 1:
      piVar2[1] = *(int *)(param_2 + 4);
      piVar2[2] = *(int *)(param_2 + 8);
      piVar2[3] = *(int *)(param_2 + 0xc);
      break;
    case 5:
      func_004D8240(&local_98,*(uint *)(param_2 + 0x1c),*(uint *)(param_2 + 0x20),DAT_0054dd10);
      fVar6 = *(float *)(param_2 + 4);
      fVar7 = *(float *)(param_2 + 8);
      fVar4 = *(float *)(param_2 + 0xc);
      piVar2[0x16] = (int)ALBW_AS_U32(local_98);
      piVar2[0x17] = (int)ALBW_AS_U32(local_94);
      piVar2[0x18] = (int)ALBW_AS_U32(local_90);
      piVar2[0x19] = (int)ALBW_AS_U32(SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar4 * fVar4));
      break;
    case 6:
      fVar6 = func_0054DE54(param_1,param_2,param_3,1);
      piVar2[1] = (int)ALBW_AS_U32(local_88);
      piVar2[2] = (int)ALBW_AS_U32((local_84 + fVar6));
      piVar2[3] = local_80;
      piVar2[0x16] = (int)ALBW_AS_U32(fVar6);
      break;
    case 7:
      func_004D7E0C(&local_50,*(uint *)(param_2 + 0x1c),*(uint *)(param_2 + 0x20));
      pfVar1 = DAT_0054dd0c;
      fVar6 = func_0054DE54(param_1,param_2,param_3,1);
      func_00115D70(&local_5c,pfVar1,fVar6);
      local_7c = local_5c;
      uStack_78 = ALBW_AS_U32(fStack_58);
      uStack_74 = ALBW_AS_U32(fStack_54);
      func_00115CE4((float *)(piVar2 + 1),&local_50,&local_7c);
      func_00115C54((float *)(piVar2 + 1),(float *)(piVar2 + 1),&local_88);
      fVar6 = *(float *)(param_2 + 0x14);
      fVar7 = *(float *)(param_2 + 0x18);
      fVar4 = *(float *)(psVar3 + 4);
      fVar5 = *(float *)(psVar3 + 6);
      piVar2[0x16] = (int)ALBW_AS_U32((*(float *)(param_2 + 0x10) * *(float *)(psVar3 + 2)));
      piVar2[0x17] = (int)ALBW_AS_U32((fVar6 * fVar4));
      piVar2[0x18] = (int)ALBW_AS_U32((fVar7 * fVar5));
      break;
    case 8:
      func_004D7E0C((float *)(piVar2 + 0x19),*(uint *)(param_2 + 0x1c),*(uint *)(param_2 + 0x20));
      pfVar1 = DAT_0054dd0c;
      fVar6 = func_0054DE54(param_1,param_2,param_3,1);
      func_00115D70(&local_5c,pfVar1,fVar6);
      local_7c = local_5c;
      uStack_78 = ALBW_AS_U32(fStack_58);
      uStack_74 = ALBW_AS_U32(fStack_54);
      func_00115CE4((float *)(piVar2 + 1),(float *)(piVar2 + 0x19),&local_7c);
      func_00115C54((float *)(piVar2 + 1),(float *)(piVar2 + 1),&local_88);
      fVar6 = *(float *)(param_2 + 0x14);
      fVar7 = *(float *)(param_2 + 0x18);
      fVar4 = *(float *)(psVar3 + 4);
      fVar5 = *(float *)(psVar3 + 6);
      piVar2[0x16] = (int)ALBW_AS_U32((*(float *)(param_2 + 0x10) * *(float *)(psVar3 + 2)));
      piVar2[0x17] = (int)ALBW_AS_U32((fVar6 * fVar4));
      piVar2[0x18] = (int)ALBW_AS_U32((fVar7 * fVar5));
      break;
    case 9:
      local_6c = *DAT_0054dd0c;
      fStack_68 = DAT_0054dd0c[1];
      fStack_64 = DAT_0054dd0c[2];
      fVar6 = *(float *)(psVar3 + 4) * *(float *)(param_2 + 0x14);
      fVar7 = *(float *)(psVar3 + 2) * *(float *)(param_2 + 0x10);
      func_00115D70(&local_50,&local_6c,fVar6);
      local_98 = local_50;
      local_94 = local_4c;
      local_90 = local_48;
      func_00115C54(&local_50,(float *)(param_2 + 4),&local_98);
      local_5c = local_50;
      fStack_58 = local_4c;
      fStack_54 = local_48;
      func_00115D70(&local_48,&local_6c,fVar6);
      local_98 = local_48;
      local_94 = ALBW_AS_F32(iStack_44);
      local_90 = ALBW_AS_F32(iStack_40);
      func_00115C70(&local_48,&local_5c,&local_98);
      piVar2[0x16] = (int)ALBW_AS_U32(local_48);
      piVar2[0x17] = iStack_44;
      piVar2[0x18] = iStack_40;
      func_00115D70(&local_4c,&local_6c,fVar6);
      local_98 = local_4c;
      local_94 = local_48;
      local_90 = ALBW_AS_F32(iStack_44);
      func_00115C54(&local_4c,&local_5c,&local_98);
      piVar2[0x19] = (int)ALBW_AS_U32(local_4c);
      piVar2[0x1a] = (int)ALBW_AS_U32(local_48);
      piVar2[0x1b] = iStack_44;
      piVar2[0x1c] = (int)ALBW_AS_U32(fVar7);
    }
    piVar2[7] = piVar2[1];
    piVar2[8] = piVar2[2];
    piVar2[9] = piVar2[3];
    piVar2[4] = piVar2[1];
    piVar2[5] = piVar2[2];
    piVar2[6] = piVar2[3];
  }
  return piVar2;
}

