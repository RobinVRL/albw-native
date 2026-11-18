#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern int DAT_001c2f9c;
extern int DAT_001c2fa0;
extern undefined4 DAT_001c2fa4;
extern undefined4 DAT_001c2fa8;
extern uint DAT_001c2fac;
extern uint DAT_001c2fb0;
extern int *DAT_001c2fb4;
extern int DAT_001c2fb8;
extern int DAT_001c2fbc;
extern int DAT_001c2fc0;
extern int DAT_001c2fc4;
extern undefined4 *DAT_001c2fc8;
extern int DAT_001c2fe0;
extern char s_SE_Signboard_CUT_001c2fcc[];

// USA 001C2DF8 <- EU 001C2DF8 (Ghidra, non-matching)
// GLOBAL DAT_001c2f9c int
// GLOBAL DAT_001c2fa0 int
// GLOBAL DAT_001c2fa4 undefined4
// GLOBAL DAT_001c2fa8 undefined4
// GLOBAL DAT_001c2fac uint
// GLOBAL DAT_001c2fb0 uint
// GLOBAL DAT_001c2fb4 int *
// GLOBAL DAT_001c2fb8 int
// GLOBAL DAT_001c2fbc int
// GLOBAL DAT_001c2fc0 int
// GLOBAL DAT_001c2fc4 int
// GLOBAL DAT_001c2fc8 undefined4 *
// GLOBAL DAT_001c2fe0 int
// GLOBAL s_SE_Signboard_CUT_001c2fcc string

undefined4 func_001C2DF8(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(int * *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  #define local_38 (*(int * *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  iVar6 = DAT_001c2fa0;
  param_1[0x1fc] = DAT_001c2f9c;
  param_1[0x1fd] = iVar6;
  pfVar2 = (float *)func_00520FC0();
  local_58 = *pfVar2;
  fStack_54 = pfVar2[1];
  local_50 = pfVar2[2];
  func_00115C70((float *)&local_38,(float *)(param_1 + 0xf4),&local_58);
  local_4c = local_38;
  uStack_48 = uStack_34;
  uStack_44 = uStack_30;
  uVar3 = func_0068C690((float *)&local_4c);
  local_38 = param_1 + 0x200;
  uVar9 = CONCAT44(DAT_001c2fa8,DAT_001c2fa4);
  iVar6 = 0;
  uVar8 = DAT_001c2fb0;
  while( true ) {
    piVar1 = DAT_001c2fb4;
    uVar4 = func_00111A64((uint *)(*DAT_001c2fb4 + 0x660));
    iVar5 = (int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20);
    if ((uVar3 + 0x3fffffff < 0x3fffffff) || ((0x40000000 < (int)uVar3 && (uVar3 < 0x80000000)))) {
      param_1[iVar6 + 0x207] = -iVar5;
    }
    else {
      param_1[iVar6 + 0x207] = iVar5;
    }
    *local_38 = (int)uVar9;
    param_1[iVar6 + 0x20b] = uVar3;
    uVar8 = DAT_001c2fac;
    if (iVar6 == 1) {
      uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
      param_1[0x20c] = (int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20) + param_1[0x20c];
    }
    iVar5 = DAT_001c2fb8;
    param_1[0x1ff] = (int)((ulonglong)uVar9 >> 0x20);
    iVar7 = iVar6 + 1;
    param_1[iVar6 + 0x203] = *(int *)(iVar5 + iVar6 * 4);
    param_1[iVar6 * 3 + 0x20d] = param_1[0xf4];
    param_1[iVar6 * 3 + 0x20e] = param_1[0xf5];
    param_1[iVar6 * 3 + 0x20f] = param_1[0xf6];
    iVar5 = DAT_001c2fc4;
    iVar6 = DAT_001c2fbc;
    if (1 < iVar7) break;
    iVar6 = iVar7;
    uVar8 = DAT_001c2fb0;
    if (iVar7 == 1) {
      uVar8 = DAT_001c2fac;
    }
  }
  param_1[0x1fe] = DAT_001c2fc0;
  *(undefined2 *)(iVar6 + (int)param_1) = 3;
  param_1[0x201] = iVar5;
  func_004A8304(*DAT_001c2fc8,param_1[0x1ef]);
  local_3c = s_SE_Signboard_CUT_001c2fcc;
  local_40 = DAT_001c2fe0;
  return func_00150A84(param_1,&local_40,0);
}

