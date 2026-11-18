#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0014F0B0(int param_1);
extern int func_004356B4(int *param_1);
extern float func_0049EF80(float *param_1,float *param_2,float *param_3);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004CEAF0(int param_1);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern undefined4 DAT_0039e5d0;
extern float *DAT_0039e5d4;
extern float *DAT_0039e5d8;
extern float *DAT_0039e5dc;
extern float *DAT_0039e5e0;
extern float *DAT_0039e5e4;
extern float *DAT_0039e5e8;
extern int *DAT_0039e5ec;
extern float DAT_0039e5f0;
extern float DAT_0039e5f4;
extern float DAT_0039e5f8;
extern float DAT_0039e5fc;
extern undefined4 DAT_0039e600;
extern undefined4 DAT_0039e604;
extern uint DAT_0039e8e4;
extern undefined4 DAT_0039e8e8;
extern undefined4 DAT_0039e8ec;
extern float DAT_0039e8f0;
extern float DAT_0039e8f4;
extern float DAT_0039e8f8;
extern int *DAT_0039e8fc;

// GLOBAL DAT_0039e5d0 undefined4
// GLOBAL DAT_0039e5d4 float *
// GLOBAL DAT_0039e5d8 float *
// GLOBAL DAT_0039e5dc float *
// GLOBAL DAT_0039e5e0 float *
// GLOBAL DAT_0039e5e4 float *
// GLOBAL DAT_0039e5e8 float *
// GLOBAL DAT_0039e5ec int *
// GLOBAL DAT_0039e5f0 float
// GLOBAL DAT_0039e5f4 float
// GLOBAL DAT_0039e5f8 float
// GLOBAL DAT_0039e5fc float
// GLOBAL DAT_0039e600 undefined4
// GLOBAL DAT_0039e604 undefined4
// GLOBAL DAT_0039e8e4 uint
// GLOBAL DAT_0039e8e8 undefined4
// GLOBAL DAT_0039e8ec undefined4
// GLOBAL DAT_0039e8f0 float
// GLOBAL DAT_0039e8f4 float
// GLOBAL DAT_0039e8f8 float
// GLOBAL DAT_0039e8fc int *
// USA 0039E384 <- EU 0039E360 (Ghidra, function missing from the decomp table)

void func_0039E384(void)

{
  _Alignas(8) unsigned char albw_frame[0xf0]; /* entry_sp - 0x0 .. entry_sp + 0xf0 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x0))
#define stack0x0000000c (*(undefined4 *)(albw_frame + 0xc))
#define stack0x00000024 (*(undefined4 *)(albw_frame + 0x24))
#define stack0x00000030 (*(undefined4 *)(albw_frame + 0x30))
#define stack0x00000038 (*(undefined4 *)(albw_frame + 0x38))
#define stack0x00000050 (*(undefined4 *)(albw_frame + 0x50))
#define stack0x00000060 (*(undefined4 *)(albw_frame + 0x60))
#define stack0x0000006c (*(undefined4 *)(albw_frame + 0x6c))
#define stack0x00000078 (*(undefined4 *)(albw_frame + 0x78))
#define stack0x000000b0 (*(undefined4 *)(albw_frame + 0xb0))
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_r4;
  float *unaff_r5;
  float *pfVar9;
  int *unaff_r6;
  int *unaff_r9;
  float in_s16;
  float fVar10;
  float fparam_0;
  undefined4 uVar11;
  undefined8 in_d9;
  #define in_stack_00000000 (*(float *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  float in_stack_00000004;
  float in_stack_00000008;
  #define in_stack_0000000c (*(float *)(albw_frame + 0xc)) /* V4: frame slot (callee-filled) */
  float in_stack_00000010;
  float in_stack_00000014;
  #define in_stack_00000024 (*(float *)(albw_frame + 0x24)) /* V4: frame slot (callee-filled) */
  float in_stack_00000028;
  undefined4 *in_stack_0000002c;
  #define in_stack_00000030 (*(float * *)(albw_frame + 0x30)) /* V4: frame slot (callee-filled) */
  int in_stack_00000034;
  #define in_stack_00000038 (*(float *)(albw_frame + 0x38)) /* V4: frame slot (callee-filled) */
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  undefined4 *in_stack_0000004c;
  #define in_stack_00000050 (*(undefined4 * *)(albw_frame + 0x50)) /* V4: frame slot (callee-filled) */
  undefined4 in_stack_0000005c;
  #define in_stack_00000060 (*(float *)(albw_frame + 0x60)) /* V4: frame slot (callee-filled) */
  float in_stack_00000064;
  float in_stack_00000068;
  #define in_stack_0000006c (*(float *)(albw_frame + 0x6c)) /* V4: frame slot (callee-filled) */
  float in_stack_00000070;
  undefined4 in_stack_00000074;
  #define in_stack_00000078 (*(undefined4 *)(albw_frame + 0x78)) /* V4: frame slot (callee-filled) */
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  uint in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  float in_stack_0000009c;
  undefined1 uStack000000a0;
  undefined1 uStack000000a1;
  #define in_stack_000000b0 (*(undefined4 *)(albw_frame + 0xb0)) /* V4: frame slot (callee-filled) */
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  
  *(undefined2 *)(*(int *)(unaff_r4 + 0x430) + 0x30) = **(undefined2 **)(unaff_r4 + 0x3a0);
  *(undefined4 *)(*(int *)(unaff_r4 + 0x434) + 0x2c) = DAT_0039e5d0;
  iVar2 = *(int *)(unaff_r4 + 0x49c);
  if (iVar2 == 4) {
    func_00115CA8(&stack0x00000000,unaff_r5,DAT_0039e5d4);
    func_00115CA8(&stack0x00000024,unaff_r5,DAT_0039e5d8);
  }
  else if (iVar2 == 3) {
    func_00115CA8(&stack0x00000000,unaff_r5,DAT_0039e5dc);
    func_00115CA8(&stack0x00000024,unaff_r5,DAT_0039e5e0);
  }
  else if (iVar2 == 0) {
    func_00115CA8(&stack0x00000000,unaff_r5,DAT_0039e5e4);
    func_00115CA8(&stack0x00000024,unaff_r5,DAT_0039e5e8);
  }
  iVar2 = func_0052FBA0(*DAT_0039e5ec + 0x3dbbc,*(uint *)(unaff_r4 + 0x50));
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  fVar10 = DAT_0039e5f4;
  if ((*(int *)(unaff_r4 + 0x49c) != 3) && (fVar10 = DAT_0039e5f0, *(int *)(unaff_r4 + 0x49c) == 2))
  {
    fVar10 = DAT_0039e5f8;
  }
  if (iVar2 != 0) {
    in_stack_00000004 = *(float *)(iVar2 + 0x3d4) + fVar10 * ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
    in_stack_00000070 = *(float *)(iVar2 + 0x3d4) + ALBW_AS_F32(in_d9);
    fparam_0 = DAT_0039e5fc;
    in_stack_00000028 = in_stack_00000004;
    func_00115C70(&stack0x0000000c,&stack0x0000006c,(float *)(unaff_r4 + 0x490));
    in_stack_00000010 = in_s16;
    if (fparam_0 <
        SQRT(in_stack_0000000c * in_stack_0000000c + in_stack_00000014 * in_stack_00000014)) {
      func_0068A3EC(&stack0x0000000c,fparam_0);
      func_00115C54(&stack0x0000006c,&stack0x0000000c,(float *)(unaff_r4 + 0x490));
    }
  }
  uVar11 = DAT_0039e600;
  iVar3 = *(int *)(unaff_r4 + 0x49c);
  iVar4 = *(int *)(unaff_r4 + 0x434);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(unaff_r4 + 0x3d0);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(unaff_r4 + 0x3d4);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(unaff_r4 + 0x3d8);
  if (iVar3 == 3) {
    in_stack_00000038 = in_stack_00000000;
    in_stack_0000003c = in_stack_00000004;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000044 = in_stack_00000024;
    in_stack_00000048 = in_stack_00000028;
    in_stack_0000004c = in_stack_0000002c;
    pfVar9 = (float *)func_00520FC0();
    func_0049EF80(pfVar9,&stack0x00000038,&stack0x00000060);
    in_stack_00000000 =
         in_stack_00000038 + (in_stack_00000044 - in_stack_00000038) * in_stack_00000060;
    in_stack_00000004 =
         in_stack_0000003c + (in_stack_00000048 - in_stack_0000003c) * in_stack_00000060;
    in_stack_00000008 =
         in_stack_00000040 + (ALBW_AS_F32(in_stack_0000004c) - in_stack_00000040) * in_stack_00000060;
    iVar3 = *unaff_r9;
    uVar6 = *(undefined4 *)(unaff_r4 + 0x43c);
    uVar7 = *(undefined4 *)(unaff_r4 + 0x440);
    uVar8 = *(undefined4 *)(unaff_r4 + 0x444);
    *(float *)(iVar3 + 0x58) = in_stack_00000000;
    *(float *)(iVar3 + 0x5c) = in_stack_00000004;
    *(float *)(iVar3 + 0x60) = in_stack_00000008;
    *(undefined4 *)(iVar3 + 100) = uVar6;
    *(undefined4 *)(iVar3 + 0x68) = uVar7;
    *(undefined4 *)(iVar3 + 0x6c) = uVar8;
    *(float *)(iVar3 + 0x70) = fVar10;
    func_00115C70(&stack0x0000000c,&stack0x00000000,(float *)(unaff_r4 + 0x43c));
    in_stack_00000010 = in_s16;
    func_00115DC8(&stack0x0000000c);
    if (iVar2 != 0) {
      func_00115C70((float *)&stack0x00000050,&stack0x00000000,(float *)(iVar2 + 0x3d0));
      func_00115DC8((float *)&stack0x00000050);
      func_00115C54(&stack0x0000000c,&stack0x0000000c,(float *)&stack0x00000050);
      func_00115DC8(&stack0x0000000c);
    }
  }
  else {
    iVar2 = *unaff_r9;
    *(float *)(iVar2 + 0x58) = in_stack_00000000;
    *(float *)(iVar2 + 0x5c) = in_stack_00000004;
    *(float *)(iVar2 + 0x60) = in_stack_00000008;
    *(float *)(iVar2 + 100) = in_stack_00000024;
    *(float *)(iVar2 + 0x68) = in_stack_00000028;
    *(undefined4 **)(iVar2 + 0x6c) = in_stack_0000002c;
    *(float *)(iVar2 + 0x70) = fVar10;
    uVar6 = DAT_0039e604;
    if (*(int *)(unaff_r4 + 0x49c) != 1 && *(int *)(unaff_r4 + 0x49c) != 2) {
      iVar2 = *(int *)(unaff_r4 + 0x430);
      *(float *)(iVar2 + 0x24) = in_s16;
      *(float *)(iVar2 + 0x28) = in_s16;
      *(float *)(iVar2 + 0x2c) = in_s16;
      *(undefined4 *)(*unaff_r6 + 0x34) = uVar6;
      goto code_r0x0039e5b4;
    }
    func_00115C70(&stack0x0000000c,&stack0x00000000,&stack0x00000024);
    func_00115DC8(&stack0x0000000c);
  }
  iVar2 = *(int *)(unaff_r4 + 0x430);
  *(float *)(iVar2 + 0x24) = in_stack_0000000c;
  *(float *)(iVar2 + 0x28) = in_stack_00000010;
  *(float *)(iVar2 + 0x2c) = in_stack_00000014;
  *(undefined4 *)(*unaff_r6 + 0x34) = uVar11;
code_r0x0039e5b4:
  func_004356B4(*(int **)(unaff_r4 + 0x434));
  func_004CEAF0(*(int *)(unaff_r4 + 0x4d4));
  uVar5 = *(uint *)(unaff_r4 + 0x49c);
  bVar1 = false;
  pfVar9 = (float *)(unaff_r4 + 0x484);
  if ((uVar5 == 1 || uVar5 == 2) || uVar5 == 3) {
    *(undefined1 *)(unaff_r4 + 0x509) = 0;
    *pfVar9 = in_s16;
    *(float *)(unaff_r4 + 0x488) = in_s16;
    in_stack_00000088 = DAT_0039e8e4;
    *(float *)(unaff_r4 + 0x48c) = in_s16;
    in_stack_00000088 = in_stack_00000088 | uVar5 & 0xffff0000;
    in_stack_00000078 = 0;
    in_stack_0000007c = 0;
    in_stack_00000080 = 0;
    in_stack_00000084 = 0;
    in_stack_0000008c = 0xff;
    in_stack_00000090 = 0;
    in_stack_00000094 = 0;
    in_stack_00000098 = 0;
    uStack000000a0 = 0;
    uStack000000a1 = 1;
    in_stack_0000009c = in_s16;
    func_00110D44(&stack0x00000030,(byte *)&stack0x00000078,0x2a);
    in_stack_000000b0 = *(undefined4 *)(unaff_r4 + 0x448);
    in_stack_000000b4 = *(undefined4 *)(unaff_r4 + 0x44c);
    in_stack_000000b8 = *(undefined4 *)(unaff_r4 + 0x450);
    in_stack_00000034 = unaff_r4 + 0x50c;
    in_stack_00000050 = &stack0x000000b0;
    in_stack_0000004c = &stack0x0000006c;
    in_stack_0000005c = DAT_0039e8ec;
    in_stack_0000003c = *(float *)(unaff_r4 + 0x2cc);
    in_stack_00000044 = DAT_0039e8f0;
    in_stack_00000040 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&in_stack_00000040 + 2)),*(undefined2 *)(unaff_r4 + 0x54)));
    in_stack_00000030 = pfVar9;
    in_stack_00000060 = in_s16;
    in_stack_00000064 = in_s16;
    in_stack_00000068 = in_s16;
    func_0014F0B0(unaff_r4);
    iVar2 = func_004A7620(*DAT_0039e8fc,(uint *)&stack0x00000030,3,DAT_0039e8f8,DAT_0039e8f4);
    if (iVar2 != 0) {
      bVar1 = true;
    }
  }
  *(float *)(unaff_r4 + 0x448) = in_stack_0000006c;
  *(float *)(unaff_r4 + 0x44c) = in_stack_00000070;
  *(undefined4 *)(unaff_r4 + 0x450) = in_stack_00000074;
  if (bVar1) {
    func_00115C54((float *)(unaff_r4 + 0x448),(float *)(unaff_r4 + 0x448),pfVar9);
  }
  *(float *)(unaff_r4 + 0x43c) = in_stack_00000000;
  *(float *)(unaff_r4 + 0x440) = in_stack_00000004;
  *(float *)(unaff_r4 + 0x444) = in_stack_00000008;
  return;
}

