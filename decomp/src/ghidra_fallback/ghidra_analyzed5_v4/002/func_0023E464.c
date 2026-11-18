#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float DAT_0023e56c;

// GLOBAL DAT_0023e56c float
// USA 0023E464 <- EU 0023E464 (Ghidra, function missing from the decomp table)

undefined4 func_0023E464(void)

{
  _Alignas(8) unsigned char albw_frame[0xd0]; /* entry_sp - 0x0 .. entry_sp + 0xd0 */
#define stack0x00000048 (*(undefined4 *)(albw_frame + 0x48))
#define stack0x00000054 (*(undefined4 *)(albw_frame + 0x54))
#define stack0x00000078 (*(undefined4 *)(albw_frame + 0x78))
#define stack0x00000084 (*(undefined4 *)(albw_frame + 0x84))
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float *unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  float *unaff_r7;
  float fVar4;
  float fVar5;
  float in_stack_00000010;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000028;
  #define in_stack_00000048 (*(float *)(albw_frame + 0x48)) /* V4: frame slot (callee-filled) */
  float in_stack_0000004c;
  float in_stack_00000050;
  #define in_stack_00000054 (*(float *)(albw_frame + 0x54)) /* V4: frame slot (callee-filled) */
  float in_stack_00000058;
  float in_stack_0000005c;
  float fStack00000078;
  undefined4 uStack0000007c;
  undefined4 uStack00000080;
  #define in_stack_00000084 (*(float *)(albw_frame + 0x84)) /* V4: frame slot (callee-filled) */
  float in_stack_00000088;
  float in_stack_0000008c;
  
  fStack00000078 = in_stack_00000010;
  uStack0000007c = in_stack_0000001c;
  uStack00000080 = in_stack_00000028;
  func_00115D70(&stack0x00000084,&stack0x00000078,unaff_r4[1]);
  in_stack_00000054 = in_stack_00000084;
  in_stack_00000058 = in_stack_00000088;
  in_stack_0000005c = in_stack_0000008c;
  func_00115C54(&stack0x00000084,unaff_r7,&stack0x00000054);
  fVar2 = in_stack_0000008c;
  fVar4 = in_stack_00000084;
  fVar5 = in_stack_00000088;
  func_00115D70(&stack0x00000084,&stack0x00000078,unaff_r4[1]);
  in_stack_00000048 = in_stack_00000084;
  in_stack_0000004c = in_stack_00000088;
  in_stack_00000050 = in_stack_0000008c;
  func_00115C70(&stack0x00000084,unaff_r7,&stack0x00000048);
  *unaff_r4 = fVar4;
  unaff_r4[1] = fVar5;
  unaff_r4[2] = fVar2;
  unaff_r6[0x19] = (int)ALBW_AS_U32(in_stack_00000084);
  unaff_r6[0x1a] = (int)ALBW_AS_U32(in_stack_00000088);
  unaff_r6[0x1b] = (int)ALBW_AS_U32(in_stack_0000008c);
  unaff_r6[0x1c] = (int)ALBW_AS_U32((*unaff_r4 * DAT_0023e56c));
  func_004356B4(unaff_r6);
  fVar4 = func_0054DE3C(unaff_r5,1,1);
  fVar2 = *(float *)(unaff_r5 + 0x3d4);
  uVar3 = *(undefined4 *)(unaff_r5 + 0x3d8);
  iVar1 = *(int *)(unaff_r5 + 0x40c);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_r5 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar2 + fVar4;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  return func_004356B4(*(int **)(unaff_r5 + 0x40c));
}

