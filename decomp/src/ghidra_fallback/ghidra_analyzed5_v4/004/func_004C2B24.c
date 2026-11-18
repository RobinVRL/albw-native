// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014FD6C(int param_1,float *param_2,undefined4 param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern float func_004C2328(int param_1,undefined4 param_2);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_00521054();
extern int func_0052108C(int param_1);
extern int func_005211D8(int param_1);
extern int func_00588BE4(int param_1);
extern undefined4 DAT_004c2d78;
extern undefined4 DAT_004c2d7c;
extern undefined4 DAT_004c2d80;
extern float DAT_004c2dbc;
extern uint DAT_004c2dc0;
extern int *DAT_004c2dc4;

// USA 004C2B24 <- EU 004C2AFC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_004c2d78 undefined4
// GLOBAL DAT_004c2d7c undefined4
// GLOBAL DAT_004c2d80 undefined4
// GLOBAL DAT_004c2dbc float
// GLOBAL DAT_004c2dc0 uint
// GLOBAL DAT_004c2dc4 int *

undefined4 func_004C2B24(void)

{
  _Alignas(8) unsigned char albw_frame[0x80]; /* entry_sp - 0x0 .. entry_sp + 0x80 */
#define stack0x00000008 (*(undefined4 *)(albw_frame + 0x8))
#define stack0x0000002c (*(undefined4 *)(albw_frame + 0x2c))
#define stack0x00000030 (*(undefined4 *)(albw_frame + 0x30))
#define stack0x00000038 (*(undefined4 *)(albw_frame + 0x38))
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  int *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  undefined1 unaff_r9;
  int *unaff_r10;
  int *unaff_r11;
  float fVar5;
  undefined8 in_d9;
  int iVar6;
  #define in_stack_00000008 (*(int *)(albw_frame + 0x8)) /* V4: frame slot (callee-filled) */
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  undefined1 in_stack_00000028;
  #define in_stack_0000002c (*(float *)(albw_frame + 0x2c)) /* V4: frame slot (callee-filled) */
  #define in_stack_00000030 (*(int *)(albw_frame + 0x30)) /* V4: frame slot (callee-filled) */
  #define in_stack_00000038 (*(int *)(albw_frame + 0x38)) /* V4: frame slot (callee-filled) */
  
  iVar6 = (int)((ulonglong)in_d9 >> 0x20);
  iVar3 = func_00520FF8((int)unaff_r4);
  if ((iVar3 != 0) || (iVar3 = func_0052108C((int)unaff_r4), iVar3 != 0)) {
    func_004C2328((int)unaff_r4,4);
    goto LAB_004c2cbc;
  }
  if (*(char *)(unaff_r7 + 0x6c) != '\0') {
    func_004C2328((int)unaff_r4,5);
    goto LAB_004c2cbc;
  }
  iVar3 = func_00520EE4((int)unaff_r4);
  if (iVar3 == 0) {
    cVar1 = *(char *)((int)unaff_r4 + 0x56a);
    if (cVar1 == '\0') {
      iVar3 = func_00521054((int)unaff_r4);
      if (iVar3 == 0) goto LAB_004c2cbc;
      fVar5 = ALBW_AS_F32(unaff_r4[3]);
      if (ALBW_AS_F32(unaff_r4[0xf5]) - DAT_004c2dbc <= ALBW_AS_F32(unaff_r4[3])) {
        fVar5 = ALBW_AS_F32(unaff_r4[0xf5]) - DAT_004c2dbc;
      }
      *(float *)(unaff_r6 + 0x184) = fVar5;
      iVar3 = func_00392E48(unaff_r4 + 0xf4,1,unaff_r4 + 0x161,0);
      if (iVar3 == 0 || iVar3 == 5) {
LAB_004c2cb0:
        *(undefined1 *)((int)unaff_r4 + 0x56a) = unaff_r9;
        goto LAB_004c2cbc;
      }
      if (iVar3 != 1) {
        *(undefined1 *)((int)unaff_r4 + 0x56a) = 3;
        goto LAB_004c2cbc;
      }
    }
    else {
      if (cVar1 == '\x01') {
        if (unaff_r8 == 0) goto LAB_004c2cbc;
        goto LAB_004c2c54;
      }
      if (cVar1 == '\x02') {
        if (ALBW_AS_F32(unaff_r4[0xf5]) <= *(float *)(unaff_r6 + 0x184)) {
          unaff_r4[0xf5] = (int)ALBW_AS_U32(*(float *)(unaff_r6 + 0x184));
          func_004C2328((int)unaff_r4,4);
          (**(code **)(unaff_r4[200] + 0x38))(unaff_r4 + 200);
        }
        goto LAB_004c2cbc;
      }
      if (cVar1 != '\x03') goto LAB_004c2cbc;
      if (ALBW_AS_F32(unaff_r4[0xf5]) <= *(float *)(unaff_r6 + 0x184)) {
        *(undefined1 *)((int)unaff_r4 + 0x2d7) = unaff_r9;
        goto LAB_004c2cbc;
      }
      iVar3 = func_00392E48(unaff_r4 + 0xf4,1,unaff_r4 + 0x161,0);
      if (iVar3 == 0) goto LAB_004c2cb0;
      if (iVar3 != 1) goto LAB_004c2cbc;
    }
    *(undefined1 *)((int)unaff_r4 + 0x56a) = 2;
  }
  else {
LAB_004c2c54:
    func_004C2328((int)unaff_r4,3);
  }
LAB_004c2cbc:
  bVar2 = func_005211D8((int)unaff_r4);
  in_stack_00000018 = DAT_004c2dc0;
  if (bVar2) {
    *(undefined1 *)((int)unaff_r4 + 0x2d7) = unaff_r9;
  }
  in_stack_00000018 = in_stack_00000018 | extraout_r1 & 0xffff0000;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_0000001c = 0xff;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000014 = unaff_r4[0xb3];
  in_stack_00000024 = unaff_r4[0x13f];
  uVar4 = func_004A8F40(*DAT_004c2dc4,&stack0x00000008,4);
  if (uVar4 != 0) {
    iVar3 = func_00588BE4((int)unaff_r4);
    if (iVar3 == *unaff_r11) {
      in_stack_00000038 = unaff_r5;
      func_00150A84(unaff_r4,&stack0x00000038,0);
    }
    else {
      iVar3 = func_00588BE4((int)unaff_r4);
      if (iVar3 == *unaff_r10) {
        in_stack_00000038 = unaff_r5;
        func_00150A84(unaff_r4,&stack0x00000038,0);
      }
      else {
        in_stack_00000030 = unaff_r5;
        func_00150A84(unaff_r4,&stack0x00000030,0);
      }
    }
    (**(code **)(unaff_r4[200] + 0x30))(unaff_r4 + 200);
    *(undefined1 *)(unaff_r4 + 0x15a) = unaff_r9;
    iVar3 = func_00588BE4((int)unaff_r4);
    if (iVar3 == *unaff_r10) {
      in_stack_00000030 = iVar6;
      return func_0014FD6C((int)unaff_r4,&stack0x0000002c,unaff_r4[0xfa]);
    }
  }
  return 0;
}

