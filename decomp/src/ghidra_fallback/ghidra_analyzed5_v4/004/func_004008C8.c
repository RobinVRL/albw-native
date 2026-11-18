// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00401498(int param_1,int param_2,undefined4 param_3);
extern int func_00403154(int param_1,uint *param_2,int *param_3,int *param_4,float *param_5);
extern int func_00403534(int param_1,uint *param_2,int *param_3,int *param_4,float *param_5);
extern int func_00403A38(int param_1,uint *param_2,int param_3,int *param_4,float *param_5, undefined4 *param_6);
extern int func_00403BEC(int param_1,uint *param_2,int param_3,int *param_4,float *param_5, undefined4 *param_6);

// USA 004008C8 <- EU 004008A8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

uint * func_004008C8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x50]; /* entry_sp - 0x0 .. entry_sp + 0x50 */
#define stack0x00000008 (*(undefined4 *)(albw_frame + 0x8))
#define stack0x00000010 (*(undefined4 *)(albw_frame + 0x10))
  char cVar1;
  int iVar2;
  int *unaff_r4;
  int unaff_r5;
  uint *unaff_r6;
  int *unaff_r7;
  float *unaff_r8;
  uint in_fpscr;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  #define in_stack_00000010 (*(float *)(albw_frame + 0x10)) /* V4: frame slot (callee-filled) */
  float in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar8 = unaff_r7[0x1e];
  iVar2 = unaff_r5 + (uint)*(byte *)(unaff_r5 + 0x31) * 0x10;
  iVar3 = unaff_r7[0x20];
  iVar5 = unaff_r7[0x21];
  iVar6 = unaff_r7[0x22];
  iVar7 = unaff_r7[0x1f];
  iVar9 = unaff_r7[0x23];
  *(int *)(iVar2 + 0x1f8) = unaff_r7[0x1d];
  iVar10 = unaff_r7[0x24];
  *(int *)(iVar2 + 0x1fc) = iVar8;
  iVar8 = unaff_r7[0x25];
  *(int *)(iVar2 + 0x200) = iVar7;
  iVar7 = unaff_r7[0x26];
  *(int *)(iVar2 + 0x204) = iVar3;
  iVar3 = unaff_r7[0x27];
  iVar11 = unaff_r7[0x28];
  *(int *)(iVar2 + 0x218) = iVar8;
  *(int *)(iVar2 + 0x21c) = iVar7;
  *(int *)(iVar2 + 0x220) = iVar3;
  *(int *)(iVar2 + 0x224) = iVar11;
  *(int *)(iVar2 + 0x208) = iVar5;
  *(int *)(iVar2 + 0x20c) = iVar6;
  *(int *)(iVar2 + 0x210) = iVar9;
  *(int *)(iVar2 + 0x214) = iVar10;
  uVar4 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(byte *)(unaff_r5 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x1fc) = uVar4;
  *(char *)(unaff_r5 + 0x31) = *(char *)(unaff_r5 + 0x31) + '\x03';
  func_00401498(unaff_r5,0,(uint)*(byte *)((int)unaff_r4 + 0x46));
  cVar1 = (char)unaff_r4[0x33];
  if (cVar1 == '\0') {
    unaff_r6 = (uint *)func_00403154(unaff_r5,unaff_r6,unaff_r4,unaff_r7,unaff_r8);
  }
  else if (cVar1 == '\x01') {
    unaff_r6 = func_00403534(unaff_r5,unaff_r6,unaff_r4,unaff_r7,unaff_r8);
  }
  else if (cVar1 == '\x02') {
    in_stack_00000014 =
         (float)VectorUnsignedToFloat
                          ((uint)*(ushort *)((int)unaff_r4 + 0xae),(byte)(in_fpscr >> 0x15) & 3);
    in_stack_00000018 =
         ALBW_AS_U32(VectorUnsignedToFloat((uint)*(ushort *)(unaff_r4 + 0x2c),(byte)(in_fpscr >> 0x15) & 3));
    in_stack_0000001c =
         ALBW_AS_U32(VectorUnsignedToFloat((uint)*(ushort *)((int)unaff_r4 + 0xb2),(byte)(in_fpscr >> 0x15) & 3))
    ;
    in_stack_00000010 = ALBW_AS_F32(unaff_r4[0xf]) - in_stack_00000014;
    cVar1 = *(char *)((int)unaff_r4 + 0xcd);
    if (cVar1 == '\x01') {
      unaff_r6 = func_00403A38(unaff_r5,unaff_r6,(int)unaff_r4,unaff_r7,(float *)&stack0x00000008,
                               &stack0x00000010);
    }
    else if (cVar1 == '\x02' || cVar1 == '\x04') {
      unaff_r6 = func_00403BEC(unaff_r5,unaff_r6,(int)unaff_r4,unaff_r7,(float *)&stack0x00000008,
                               &stack0x00000010);
    }
  }
  return unaff_r6;
}

