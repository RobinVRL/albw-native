#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0023DF30(int param_1);
extern int func_002C425C(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_00324964(int param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EFFF8(int param_1);
extern int func_004F042C(void);
extern int func_005583F8(char *param_1);
extern int iRam0023e218;
extern int *piRam0023e1fc;
extern char s_SE_CrossBoard_APPEAR_0023e200[];

// USA 0023E0E8 <- EU 0023E0E8 (Ghidra, non-matching)
// GLOBAL UNK_0023e1fc int *
// GLOBAL UNK_0023e218 int
// GLOBAL s_SE_CrossBoard_APPEAR_0023e200 string

undefined4 func_0023E0E8(int *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  uVar4 = 0;
  piVar6 = param_1 + 0x1ed;
  do {
    piVar1 = piVar6;
    if (uVar4 < 4) {
      piVar1 = piVar6 + uVar4;
    }
    func_004CF478(*piVar1,0);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  iVar5 = 0x32;
  iVar2 = func_004F042C();
  if (iVar2 != 0) {
    pcVar3 = (char *)(iVar2 + 4);
    if ((uint)(int)(short)param_1[0xb] < 0x14) {
      pcVar3 = pcVar3 + (short)param_1[0xb] * 0x40;
    }
    iVar5 = func_005583F8(pcVar3);
  }
  uVar4 = func_004EFFF8(iVar5);
  if (uVar4 < 4) {
    piVar6 = piVar6 + uVar4;
  }
  iVar2 = *piVar6;
  param_1[0x1f1] = iVar2;
  func_002C425C(param_1 + 200,iVar2,0,0);
  func_0023DF30((int)param_1);
  *(undefined1 *)(param_1[0x1ec] + 0x44) = 1;
  func_004CF478(param_1[0x1f1],1);
  func_00151148(param_1[499],1);
  func_004A879C(*piRam0023e1fc,param_1[0x1ec],2);
  func_00324964((int)param_1);
  pcStack_14 = s_SE_CrossBoard_APPEAR_0023e200;
  iStack_18 = iRam0023e218;
  return func_00150A84(param_1,&iStack_18,0);
}

