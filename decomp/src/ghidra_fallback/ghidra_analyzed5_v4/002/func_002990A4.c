// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_002E1B70(int *param_1);
extern int func_002FCAD4(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_0053B0D0(int *param_1,float *param_2,float *param_3,float *param_4);
extern int *DAT_002992a8;
extern int *DAT_002992ac;
extern int *DAT_002992b0;
extern float DAT_002992b4;
extern undefined4 DAT_002992b8;

// USA 002990A4 <- EU 00299080 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_002992a8 int *
// GLOBAL DAT_002992ac int *
// GLOBAL DAT_002992b0 int *
// GLOBAL DAT_002992b4 float
// GLOBAL DAT_002992b8 undefined4

void func_002990A4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _Alignas(8) unsigned char albw_frame[0x50]; /* entry_sp - 0x50 .. entry_sp + 0x0 */
#define stack0xffffffb8 (*(undefined4 *)(albw_frame + 0x8))
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float in_s0;
  #define in_stack_ffffffb8 (*(float *)(albw_frame + 0x8)) /* V4: frame slot (callee-filled) */
  #define in_stack_ffffffbc (*(int *)(albw_frame + 0xc)) /* V4: frame slot (callee-filled) */
  #define in_stack_ffffffc0 (*(float * *)(albw_frame + 0x10)) /* V4: frame slot (callee-filled) */
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define afStack_30 ((float *)(albw_frame + 0x20))
  if (*(char *)((int)param_1 + 0x35f) != '\0') {
    iVar4 = param_1[0xd6];
    if ((*(int *)(*DAT_002992a8 + 0x44) != 0) && (*(int *)(*DAT_002992a8 + 0x44) == iVar4)) {
      piVar3 = *(int **)(iVar4 + 0x38);
      piVar6 = DAT_002992ac;
      while (DAT_002992ac = piVar6, piVar3 != (int *)(iVar4 + 0x34)) {
        piVar6 = (int *)piVar3[1];
        func_0010F1F8(piVar3,in_s0);
        *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) + -1;
        piVar3[-1] = *(int *)(iVar4 + 0x40);
        *(int **)(iVar4 + 0x40) = piVar3 + -1;
        piVar3 = piVar6;
        piVar6 = DAT_002992ac;
      }
      bVar1 = *(byte *)(param_1 + 0x17);
      iVar4 = 0;
      if (bVar1 != 0) {
        do {
          iVar5 = (int)*(short *)((int)param_1 + iVar4 * 6 + 0x5e);
          if ((0 < iVar5) && (iVar5 = func_0052FBDC(*piVar6 + 0x3dbbc,iVar5,0), iVar5 != 0)) {
            func_00230610(param_1[0xd6],*(undefined4 *)(iVar5 + 0x2cc));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)bVar1);
      }
      if ((*(ushort *)(param_1 + 0xc) & 1) != 0) {
        func_002FCAD4(param_1[0xd6]);
      }
      *(undefined1 *)((int)param_1 + 0x35f) = 0;
    }
  }
  if (*(char *)((int)param_1 + 0x35d) != '\0') {
    fStack_3c = DAT_002992b4;
    in_stack_ffffffc0 = &fStack_3c;
    uStack_38 = DAT_002992b8;
    fStack_34 = DAT_002992b4;
    in_stack_ffffffb8 = ALBW_AS_F32((uint)*(ushort *)(param_1 + 0xe5));
    in_stack_ffffffbc = 0;
    func_00120FBC(*(int *)(*DAT_002992b0 + 0x18),param_1 + 0xe6,(float *)(param_1 + 0xd8),
                  param_1 + 0xdb,ALBW_AS_U32(in_stack_ffffffb8),0,in_stack_ffffffc0);
    *(undefined1 *)((int)param_1 + 0x35d) = 0;
  }
  if (*(char *)((int)param_1 + 0x35e) != '\0') {
    *(short *)((int)param_1 + 0x39e) = (short)param_1[0xd3];
    func_002E1B70(param_1 + 0xe6);
    *(undefined1 *)((int)param_1 + 0x35e) = 0;
  }
  if (*(int *)param_1[0xd4] != 0) {
    cVar2 = (char)param_1[0xd5];
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x34))(param_1);
    }
    else if (cVar2 == '\x01') {
      (**(code **)(*param_1 + 0x38))(param_1);
    }
    else if (cVar2 == '\x02') {
      (**(code **)(*param_1 + 0x3c))(param_1);
    }
    else if (cVar2 == '\x03') {
      (**(code **)(*param_1 + 0x40))(param_1);
    }
    func_0053B0D0((int *)param_1[0xd4],&fStack_3c,afStack_30,(float *)&stack0xffffffb8);
    param_1[0xd8] = (int)ALBW_AS_U32(in_stack_ffffffb8);
    param_1[0xd9] = in_stack_ffffffbc;
    param_1[0xda] = (int)in_stack_ffffffc0;
    iVar4 = param_1[0xd6];
    *(float *)(iVar4 + 0x10c) = in_stack_ffffffb8;
    *(int *)(iVar4 + 0x110) = in_stack_ffffffbc;
    *(float **)(iVar4 + 0x114) = in_stack_ffffffc0;
  }
  return;
}

