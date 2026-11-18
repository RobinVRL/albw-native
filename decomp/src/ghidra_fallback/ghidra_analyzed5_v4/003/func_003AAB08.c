#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003AACF4(int param_1,uint param_2);
extern int DAT_003aabf4;
extern float DAT_003aabf8;
extern int DAT_003aabfc;
extern char s_SE_Switch_OFF_003aac10[];
extern char s_SE_Switch_ON_003aac00[];

// USA 003AAB08 <- EU 003AAAE4 (Ghidra, non-matching)
// GLOBAL DAT_003aabf4 int
// GLOBAL DAT_003aabf8 float
// GLOBAL DAT_003aabfc int
// GLOBAL s_SE_Switch_OFF_003aac10 string
// GLOBAL s_SE_Switch_ON_003aac00 string

void func_003AAB08(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_003aabfc;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar4 = DAT_003aabf4;
      fVar5 = DAT_003aabf8;
      func_003AACF4((int)param_1,1);
      uVar2 = (uint)*(ushort *)(param_1 + 0x106);
      param_1[0x109] = uVar2;
      if (uVar2 == 0) {
        param_1[0x10a] = iVar4;
      }
      else {
        fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x10a] = (int)ALBW_AS_U32((fVar5 / fVar3));
      }
      param_1[0x108] = 0;
      local_24 = s_SE_Switch_ON_003aac00;
      local_28 = iVar1;
      func_00150A84(param_1,&local_28,0);
    }
    else if ((param_2 != 2) && (param_2 == 3)) {
      iVar4 = DAT_003aabf4;
      fVar5 = DAT_003aabf8;
      func_003AACF4((int)param_1,0);
      uVar2 = (uint)*(ushort *)(param_1 + 0x106);
      param_1[0x109] = uVar2;
      if (uVar2 == 0) {
        param_1[0x10a] = iVar4;
      }
      else {
        fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x10a] = (int)ALBW_AS_U32((fVar5 / fVar3));
      }
      param_1[0x108] = 0;
      local_24 = s_SE_Switch_OFF_003aac10;
      local_28 = iVar1;
      func_00150A84(param_1,&local_28,0);
    }
  }
  *(char *)(param_1 + 0x10b) = (char)param_2;
  return;
}

