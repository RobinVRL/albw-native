// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001BB724(int param_1,uint param_2,int param_3);
extern int func_001DD450(int param_1,int param_2);
extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_001DE09C(int param_1);
extern int func_001E337C(int param_1);
extern int func_0025520C(int param_1);
extern int func_0025535C(int param_1);
extern void func_00255494(int param_1,int param_2,undefined4 param_3,float fparam_0);
extern int func_00255708(int param_1);
extern int func_0025583C(int param_1);
extern int func_00255850(int param_1);
extern int func_00255858(int param_1);
extern int func_00255860(int param_1);
extern int func_00255878(int param_1);
extern int func_00255898(int param_1);
extern int func_002558A0(int param_1);
extern int func_002558DC(int param_1);
extern int func_00255A18(int param_1);
extern int func_00255A4C(int param_1);
extern int func_00255AC4(int param_1,int param_2,int param_3);
extern int func_00255B40(int param_1);
extern int func_00255C50(int param_1);
extern int func_00255C94();
extern int func_002D4080(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_002D455C(int *param_1,int param_2,byte param_3,int param_4);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_0051B874(int param_1,int param_2);
extern int *DAT_00255c38;
extern int *DAT_003458d0;
extern int *DAT_003458d4;
extern int DAT_003458d8;
extern int *DAT_003458dc;
extern int DAT_003458e0;
extern int DAT_003458e4;

// USA 00344834 <- EU 00344810 (Ghidra, non-matching)
// GLOBAL DAT_00255c38 int *
// GLOBAL DAT_003458d0 int *
// GLOBAL DAT_003458d4 int *
// GLOBAL DAT_003458d8 int
// GLOBAL DAT_003458dc int *
// GLOBAL DAT_003458e0 int
// GLOBAL DAT_003458e4 int

undefined4
func_00344834(undefined4 param_1,int param_2,undefined4 param_3,float fparam_0,float fparam_1,
             float fparam_2,float fparam_3)

{
  int iVar1;
  undefined4 uVar2;
  float fparam_0_00;
  
  switch(param_1) {
  default:
    return 0;
  case 1:
    func_0025583C(param_2 + 0x40c);
    break;
  case 2:
    func_0025535C(param_2 + 0x40c);
    break;
  case 3:
    func_001BB724(*(int *)(*DAT_003458d0 + 0x40),0,1);
    break;
  case 4:
    func_001DD450(param_2,4);
    break;
  case 5:
    func_00255AC4(param_2 + 0x40c,0x14,param_3);
    break;
  case 6:
    func_00255AC4(param_2 + 0x40c,1,param_3);
    break;
  case 7:
    func_00255AC4(param_2 + 0x40c,5,param_3);
    break;
  case 8:
    func_001DE09C(param_2);
    func_001DD48C(param_2,0x50,1);
    break;
  case 9:
    func_00255494(param_2 + 0x40c,9,2,fparam_0);
    func_0051B874(*DAT_003458d4,9);
    return 1;
  case 10:
    func_00255494(param_2 + 0x40c,7,2,fparam_0);
    func_0051B874(*DAT_003458d4,7);
    return 1;
  case 0xb:
    func_00255494(param_2 + 0x40c,10,2,fparam_0);
    func_0051B874(*DAT_003458d4,10);
    return 1;
  case 0xc:
    func_00255494(param_2 + 0x40c,2,2,fparam_0);
    func_0051B874(*DAT_003458d4,2);
    return 1;
  case 0xd:
    func_00255494(param_2 + 0x40c,8,2,fparam_0);
    func_0051B874(*DAT_003458d4,8);
    return 1;
  case 0xe:
    func_00255494(param_2 + 0x40c,0xb,2,fparam_0);
    func_0051B874(*DAT_003458d4,0xb);
    return 1;
  case 0xf:
    func_00255494(param_2 + 0x40c,3,2,fparam_0);
    func_0051B874(*DAT_003458d4,3);
    return 1;
  case 0x10:
    func_00255494(param_2 + 0x40c,6,2,fparam_0);
    func_0051B874(*DAT_003458d4,6);
    return 1;
  case 0x11:
    func_00255494(param_2 + 0x40c,4,2,fparam_0);
    func_0051B874(*DAT_003458d4,4);
    return 1;
  case 0x12:
  case 0x29:
    func_00255494(param_2 + 0x40c,1,2,fparam_0);
    break;
  case 0x13:
    iVar1 = func_0025520C(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    return 1;
  case 0x14:
    iVar1 = func_00255850(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    return 1;
  case 0x15:
    iVar1 = func_00255858(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    return 1;
  case 0x16:
    func_00255494(param_2 + 0x40c,0x1d,2,fparam_0);
    break;
  case 0x17:
    func_00255494(param_2 + 0x40c,0x19,2,fparam_0);
    break;
  case 0x18:
    func_00255494(param_2 + 0x40c,0x18,2,fparam_0);
    break;
  case 0x19:
    func_00255494(param_2 + 0x40c,0x1a,2,fparam_0);
    break;
  case 0x1a:
    func_00255494(param_2 + 0x40c,0xc,2,fparam_0);
    func_0051B874(*DAT_003458d4,0xc);
    return 1;
  case 0x1b:
    func_00255494(param_2 + 0x40c,0,2,fparam_0);
    fparam_0_00 = fparam_0;
    func_00255494(param_2 + 0x40c,0x2c,2,fparam_0_00);
    func_002D455C((int *)(param_2 + 0x694),0,0,0);
    func_0051B874(*DAT_003458d4,0);
    return 1;
  case 0x1c:
    func_00255494(param_2 + 0x40c,0,3,fparam_0);
    func_0051B874(*DAT_003458d4,0);
    return 1;
  case 0x1d:
    func_00255494(param_2 + 0x40c,0,4,fparam_0);
    func_0051B874(*DAT_003458d4,0);
    return 1;
  case 0x1e:
    func_00255494(param_2 + 0x40c,0,5,fparam_0);
    func_0051B874(*DAT_003458d4,0);
    return 1;
  case 0x1f:
    func_00255494(param_2 + 0x40c,0x1c,2,fparam_0);
    break;
  case 0x20:
    func_00255494(param_2 + 0x40c,9,1,fparam_0);
    func_0051B874(*DAT_003458d4,9);
    break;
  case 0x21:
    func_00255494(param_2 + 0x40c,7,1,fparam_0);
    func_0051B874(*DAT_003458d4,7);
    break;
  case 0x22:
    func_00255494(param_2 + 0x40c,10,1,fparam_0);
    func_0051B874(*DAT_003458d4,10);
    break;
  case 0x23:
    func_00255494(param_2 + 0x40c,2,1,fparam_0);
    func_0051B874(*DAT_003458d4,2);
    break;
  case 0x24:
    func_00255494(param_2 + 0x40c,8,1,fparam_0);
    func_0051B874(*DAT_003458d4,8);
    break;
  case 0x25:
    func_00255494(param_2 + 0x40c,0xb,1,fparam_0);
    func_0051B874(*DAT_003458d4,0xb);
    break;
  case 0x26:
    func_00255494(param_2 + 0x40c,3,1,fparam_0);
    func_0051B874(*DAT_003458d4,3);
    break;
  case 0x27:
    func_00255494(param_2 + 0x40c,6,1,fparam_0);
    func_0051B874(*DAT_003458d4,6);
    break;
  case 0x28:
    func_00255494(param_2 + 0x40c,4,1,fparam_0);
    func_0051B874(*DAT_003458d4,4);
    break;
  case 0x2a:
    func_00255494(param_2 + 0x40c,0x17,2,fparam_0);
    break;
  case 0x2c:
    func_00255494(param_2 + 0x40c,0xf,2,fparam_0);
    func_0051B874(*DAT_003458d4,0xf);
    break;
  case 0x2d:
    func_00255AC4(param_2 + 0x40c,300,param_3);
    break;
  case 0x2e:
    func_00255AC4(param_2 + 0x40c,100,param_3);
    break;
  case 0x2f:
    func_00255494(param_2 + 0x40c,0x1e,2,fparam_0);
    break;
  case 0x30:
    func_00255494(param_2 + 0x40c,0xd,2,fparam_0);
    func_0051B874(*DAT_003458d4,0xd);
    break;
  case 0x31:
    func_00255494(param_2 + 0x40c,0x1e,3,fparam_0);
    break;
  case 0x32:
    func_00255A4C(param_2 + 0x40c);
    break;
  case 0x33:
    func_00255494(param_2 + 0x40c,0x21,2,fparam_0);
    break;
  case 0x34:
  case 0x60:
    iVar1 = func_00255B40(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    break;
  case 0x35:
    func_00255494(param_2 + 0x40c,0xe,2,fparam_0);
    func_0051B874(*DAT_003458d4,0xe);
    break;
  case 0x36:
    func_00255494(param_2 + 0x40c,0x10,2,fparam_0);
    func_0051B874(*DAT_003458d4,0x10);
    break;
  case 0x37:
    func_00255494(param_2 + 0x40c,0x11,2,fparam_0);
    func_0051B874(*DAT_003458d4,0x11);
    break;
  case 0x38:
    iVar1 = func_00255708(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    break;
  case 0x39:
    iVar1 = func_00255878(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    break;
  case 0x3a:
    func_004CDF40(*DAT_003458dc,DAT_003458d8,1);
    func_001E337C(*(int *)(*DAT_00255c38 + 0x130));
    if (*(byte *)(param_2 + 0x505) < 99) {
      *(byte *)(param_2 + 0x505) = *(byte *)(param_2 + 0x505) + 1;
    }
    return 1;
  case 0x3b:
    func_004CDF40(*DAT_003458dc,DAT_003458e0,1);
    uVar2 = func_00255C50(param_2 + 0x40c);
    return uVar2;
  case 0x3c:
    func_004CDF40(*DAT_003458dc,0x38c,1);
    uVar2 = func_00255C94(param_2 + 0x40c);
    return uVar2;
  case 0x3d:
    func_00255494(param_2 + 0x40c,0x24,2,fparam_0);
    break;
  case 0x3e:
    func_00255494(param_2 + 0x40c,0x1b,2,fparam_0);
    break;
  case 0x3f:
    func_00255494(param_2 + 0x40c,0x1f,3,fparam_0);
    break;
  case 0x40:
    func_00255494(param_2 + 0x40c,0x1f,4,fparam_0);
    break;
  case 0x41:
    func_00255494(param_2 + 0x40c,1,3,fparam_0);
    break;
  case 0x42:
    func_00255494(param_2 + 0x40c,0x29,2,fparam_0);
    func_004CDF40(*DAT_003458dc,DAT_003458e4,1);
    break;
  case 0x43:
    func_00255494(param_2 + 0x40c,0x28,2,fparam_0);
    func_004CDF40(*DAT_003458dc,DAT_003458e4,1);
    break;
  case 0x44:
    func_00255494(param_2 + 0x40c,0x2b,2,fparam_0);
    func_004CDF40(*DAT_003458dc,DAT_003458e4,1);
    break;
  case 0x45:
  case 0x5d:
    break;
  case 0x46:
    func_00255494(param_2 + 0x40c,0x27,2,fparam_0);
    func_0051B874(*DAT_003458d4,0x27);
    break;
  case 0x47:
    func_00255494(param_2 + 0x40c,0x20,2,fparam_0);
    break;
  case 0x48:
    func_00255494(param_2 + 0x40c,0x2a,2,fparam_0);
    func_004CDF40(*DAT_003458dc,DAT_003458e4,1);
    break;
  case 0x49:
    iVar1 = func_002558DC(param_2 + 0x40c);
    func_004CDF40(*DAT_003458dc,0x394,1);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    break;
  case 0x4a:
    iVar1 = func_00255A18(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    break;
  case 0x4b:
    iVar1 = func_00255898(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    break;
  case 0x4c:
    iVar1 = func_002558A0(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    break;
  case 0x4d:
    func_00255494(param_2 + 0x40c,9,3,fparam_0);
    func_0051B874(*DAT_003458d4,9);
    break;
  case 0x4e:
    func_00255494(param_2 + 0x40c,7,3,fparam_0);
    func_0051B874(*DAT_003458d4,7);
    break;
  case 0x4f:
    func_00255494(param_2 + 0x40c,10,3,fparam_0);
    func_0051B874(*DAT_003458d4,10);
    break;
  case 0x50:
    func_00255494(param_2 + 0x40c,2,3,fparam_0);
    func_0051B874(*DAT_003458d4,2);
    break;
  case 0x51:
    func_00255494(param_2 + 0x40c,8,3,fparam_0);
    func_0051B874(*DAT_003458d4,8);
    break;
  case 0x52:
    func_00255494(param_2 + 0x40c,0xb,3,fparam_0);
    func_0051B874(*DAT_003458d4,0xb);
    break;
  case 0x53:
    func_00255494(param_2 + 0x40c,3,3,fparam_0);
    func_0051B874(*DAT_003458d4,3);
    break;
  case 0x54:
    func_00255494(param_2 + 0x40c,6,3,fparam_0);
    func_0051B874(*DAT_003458d4,6);
    break;
  case 0x55:
    func_00255494(param_2 + 0x40c,4,3,fparam_0);
    func_0051B874(*DAT_003458d4,4);
    break;
  case 0x56:
    func_00255494(param_2 + 0x40c,0x2c,3,fparam_0);
    break;
  case 0x57:
    iVar1 = func_00255860(param_2 + 0x40c);
    func_0051B874(*DAT_003458d4,iVar1 + 0x12);
    break;
  case 0x58:
    func_00255494(param_2 + 0x40c,0xc,3,fparam_0);
    func_0051B874(*DAT_003458d4,0xc);
    break;
  case 0x59:
    func_00255494(param_2 + 0x40c,0xd,3,fparam_0);
    func_0051B874(*DAT_003458d4,0xd);
    break;
  case 0x5a:
    func_002D4080(param_2,fparam_0,fparam_1,fparam_2,fparam_3);
    break;
  case 0x5b:
    func_00255AC4(param_2 + 0x40c,0x32,param_3);
    break;
  case 0x5c:
    func_00255494(param_2 + 0x40c,5,2,fparam_0);
    func_0051B874(*DAT_003458d4,5);
    break;
  case 0x5e:
    func_001DD48C(param_2,4,1);
    break;
  case 0x5f:
    func_00255494(param_2 + 0x40c,7,1,fparam_0);
  }
  return 1;
}

