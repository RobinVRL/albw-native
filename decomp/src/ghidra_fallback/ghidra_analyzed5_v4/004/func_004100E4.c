#include "ghidra_types.h"

extern int func_00417194(int param_1,int param_2,undefined2 param_3);
extern int func_0041810C(int param_1,int param_2,int param_3);
extern int func_00418180(int param_1,int param_2,int *param_3,int *param_4);
extern int func_00418250(int param_1,int param_2,int *param_3,int *param_4);
extern int func_00418320(int param_1,int param_2,int param_3);
extern int func_00418384(int param_1,int param_2,int param_3);
extern int func_004183E8(int param_1,int param_2,int param_3);
extern int func_00418B94(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00419288(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0041959C(int param_1,undefined1 param_2,float fparam_0);
extern int func_004195A8(int param_1,int param_2,float fparam_0);
extern int func_00419924(void);
extern int func_00419AF4(int param_1,ushort param_2);
extern int func_00419D34(int *param_1,int param_2,int param_3,uint param_4);
extern int func_0041A294(int param_1,uint param_2,float fparam_0);
extern int func_0041A57C(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7, int param_8,int param_9);
extern int func_0041A6E8(int param_1,uint param_2,float fparam_0);
extern int func_0041AA08(int param_1,uint param_2,float fparam_0);
extern int func_0041AA48(int param_1,uint param_2,undefined1 param_3);
extern int func_0041AB88(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9, undefined1 param_10,undefined1 *param_11,float fparam_0);
extern int func_0041B018(int param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4);
extern int func_0041B844(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0041B898(int param_1,uint param_2,float fparam_0);
extern int func_0041B930(int param_1,uint param_2,undefined4 param_3);
extern int func_0041B9B4(int param_1,uint param_2,float fparam_0);
extern int func_0041B9CC(int param_1,int param_2);
extern int func_0041BA0C(int param_1,uint param_2,float fparam_0);
extern int func_0041BA28(int param_1,uint param_2,float fparam_0);
extern int func_0041BA40(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_0041BAC8(int param_1,int param_2,undefined2 param_3);
extern int func_0041BAD4(int param_1,uint param_2,float fparam_0);
extern int func_0041BAEC(int param_1,undefined2 param_2);
extern int func_0041BB00(int param_1,uint param_2,int param_3);
extern int func_0041BB9C(int param_1,uint param_2,undefined4 param_3);
extern int func_0041BC20(int param_1,uint param_2,float fparam_0);
extern int func_0041BC38(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int func_0041BCC8(int param_1,uint param_2,undefined4 param_3);
extern int func_0041BD78(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0041BDF4(int param_1,int param_2,int param_3);
extern int func_0041BE78(int *param_1,int *param_2);
extern int func_0041C320(int *param_1,undefined4 *param_2);
extern int func_0041C81C(void);
extern int func_0041C870(int *param_1,int param_2);
extern int func_0041C880(int *param_1,int param_2);
extern int func_0041C888(undefined4 param_1,int param_2,int param_3);
extern undefined4 DAT_0040fee8;
extern int DAT_00410214;

// USA 004100E4 <- EU 004100C4 (Ghidra, non-matching)
// GLOBAL DAT_0040fee8 undefined4
// GLOBAL DAT_00410214 int

void * func_004100E4(void)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  code *pcVar7;
  uint uVar8;
  int *unaff_r5;
  
code_r0x004100c4:
  pvVar3 = func_0041AA08(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
switchD_0040fabc_caseD_0:
  unaff_r5 = (int *)*unaff_r5;
  if (unaff_r5 == (int *)0x0) {
    return pvVar3;
  }
  pvVar3 = (void *)(uint)*(byte *)(unaff_r5 + 1);
  switch((int)(uintptr_t)(pvVar3)) {
  default:
    goto switchD_0040fabc_caseD_0;
  case 0x2:
    pvVar3 = (void *)0x1;
    *(undefined1 *)unaff_r5[4] = 1;
    goto switchD_0040fabc_caseD_0;
  case 0x3:
    (**(code **)(*(int *)unaff_r5[4] + 8))((int *)unaff_r5[4]);
    pvVar3 = (void *)0x1;
    *(undefined1 *)unaff_r5[5] = 1;
    goto switchD_0040fabc_caseD_0;
  case 0x4:
    pcVar7 = *(code **)(*(int *)unaff_r5[4] + 0xc);
    break;
  case 0x5:
    pcVar7 = *(code **)(*(int *)unaff_r5[4] + 0x10);
    break;
  case 0x6:
    if (*(char *)(unaff_r5 + 5) != '\0') {
      *(undefined4 *)(unaff_r5[4] + 0x14) = DAT_0040fee8;
    }
    pvVar3 = (void *)(**(code **)(*(int *)unaff_r5[4] + 0x14))((int *)unaff_r5[4]);
    goto switchD_0040fabc_caseD_0;
  case 0x7:
    pvVar3 = (void *)(**(code **)(*(int *)unaff_r5[4] + 0x18))
                               ((int *)unaff_r5[4],(int)*(char *)(unaff_r5 + 5));
    goto switchD_0040fabc_caseD_0;
  case 0x8:
    *(int *)(unaff_r5[4] + 0x14) = unaff_r5[5];
    *(int *)(unaff_r5[4] + 0x18) = unaff_r5[6];
    *(int *)(unaff_r5[4] + 0x1c) = unaff_r5[7];
    *(int *)(unaff_r5[4] + 0x20) = unaff_r5[8];
    *(int *)(unaff_r5[4] + 0x24) = unaff_r5[9];
    func_0041959C(unaff_r5[4],(char)unaff_r5[10],ALBW_AS_F32(unaff_r5[0xb]));
    uVar8 = 0;
    *(int *)(unaff_r5[4] + 0x30) = unaff_r5[0xc];
    do {
      pvVar3 = (void *)func_004195A8(unaff_r5[4],uVar8 & 0xff,ALBW_AS_F32(unaff_r5[uVar8 + 0xd]));
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 2);
    goto switchD_0040fabc_caseD_0;
  case 0x9:
    pvVar3 = (void *)unaff_r5[4];
    *(undefined1 *)((int)pvVar3 + 0x34) = *(undefined1 *)(unaff_r5 + 5);
    goto switchD_0040fabc_caseD_0;
  case 0xa:
    pvVar3 = (void *)unaff_r5[4];
    *(undefined1 *)((int)pvVar3 + 0x35) = *(undefined1 *)((int)unaff_r5 + 0x15);
    goto switchD_0040fabc_caseD_0;
  case 0xb:
    pvVar3 = (void *)unaff_r5[4];
    *(undefined1 *)((int)pvVar3 + 0x2e) = *(undefined1 *)(unaff_r5 + 5);
    goto switchD_0040fabc_caseD_0;
  case 0xc:
    pvVar3 = (void *)unaff_r5[4];
    *(undefined1 *)((int)pvVar3 + 0x10) = 0;
    goto switchD_0040fabc_caseD_0;
  case 0xd:
    func_0041BE78((int *)unaff_r5[4],unaff_r5 + 5);
    *(undefined1 *)(unaff_r5[4] + 0x74) = *(undefined1 *)(unaff_r5 + 8);
    *(undefined1 *)(unaff_r5[4] + 0x5c) = *(undefined1 *)((int)unaff_r5 + 0x21);
    pvVar3 = (void *)func_0041BD78(unaff_r5[4],unaff_r5[9],unaff_r5[10]);
    goto switchD_0040fabc_caseD_0;
  case 0xe:
    pvVar3 = (void *)func_0041B844(unaff_r5[4],unaff_r5 + 5,unaff_r5 + 8);
    goto switchD_0040fabc_caseD_0;
  case 0xf:
    pvVar3 = (void *)func_0041C320((int *)unaff_r5[4],unaff_r5 + 5);
    goto switchD_0040fabc_caseD_0;
  case 0x10:
    pvVar3 = (void *)func_0041BDF4(unaff_r5[4],unaff_r5[5] & 0xff,unaff_r5[6]);
    goto switchD_0040fabc_caseD_0;
  case 0x11:
    pvVar3 = (void *)unaff_r5[4];
    *(int *)((int)pvVar3 + 100) = unaff_r5[5];
    goto switchD_0040fabc_caseD_0;
  case 0x12:
    pvVar3 = (void *)unaff_r5[4];
    *(undefined1 *)((int)pvVar3 + 0x74) = *(undefined1 *)(unaff_r5 + 5);
    goto switchD_0040fabc_caseD_0;
  case 0x13:
    pvVar3 = (void *)func_0041BAC8(unaff_r5[4],unaff_r5[6],(short)unaff_r5[7]);
    goto switchD_0040fabc_caseD_0;
  case 0x14:
    pvVar3 = (void *)func_0041BAEC(unaff_r5[6],(short)unaff_r5[7]);
    goto switchD_0040fabc_caseD_0;
  case 0x15:
    iVar2 = func_0041B9CC(unaff_r5[4],unaff_r5[5]);
    pvVar3 = (void *)0x0;
    if (iVar2 != 0) {
      pvVar3 = (void *)func_00417194(iVar2,unaff_r5[6],(short)unaff_r5[7]);
    }
    goto switchD_0040fabc_caseD_0;
  case 0x16:
    pvVar3 = (void *)func_0041B930(unaff_r5[4],unaff_r5[5],unaff_r5[6] & 0xff);
    goto switchD_0040fabc_caseD_0;
  case 0x17:
    pvVar3 = (void *)func_0041BA40(unaff_r5[4],unaff_r5[5],(int)*(char *)(unaff_r5 + 6),unaff_r5[7])
    ;
    goto switchD_0040fabc_caseD_0;
  case 0x18:
    pvVar3 = (void *)func_0041BA0C(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
    goto switchD_0040fabc_caseD_0;
  case 0x19:
    pvVar3 = (void *)func_0041B9B4(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
    goto switchD_0040fabc_caseD_0;
  case 0x1a:
    pvVar3 = (void *)func_0041B898(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
    goto switchD_0040fabc_caseD_0;
  case 0x1b:
    pvVar3 = (void *)func_0041BC20(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
    goto switchD_0040fabc_caseD_0;
  case 0x1c:
    pvVar3 = (void *)func_0041BA28(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
    goto switchD_0040fabc_caseD_0;
  case 0x1d:
    pvVar3 = (void *)func_0041BAD4(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
    goto switchD_0040fabc_caseD_0;
  case 0x1e:
    pvVar3 = (void *)func_0041BC38(unaff_r5[4],unaff_r5[5],unaff_r5[6],ALBW_AS_F32(unaff_r5[7]));
    goto switchD_0040fabc_caseD_0;
  case 0x1f:
    pvVar3 = (void *)func_0041BB00(unaff_r5[4],unaff_r5[5],unaff_r5[6]);
    goto switchD_0040fabc_caseD_0;
  case 0x20:
    pvVar3 = (void *)func_0041BB9C(unaff_r5[4],unaff_r5[5],(int)*(char *)(unaff_r5 + 6));
    goto switchD_0040fabc_caseD_0;
  case 0x21:
    pvVar3 = (void *)func_0041BCC8(unaff_r5[4],unaff_r5[5],(uint)*(byte *)(unaff_r5 + 6));
    goto switchD_0040fabc_caseD_0;
  case 0x22:
    pvVar3 = (void *)func_00419288(unaff_r5[4],unaff_r5 + 5,unaff_r5 + 8);
    goto switchD_0040fabc_caseD_0;
  case 0x23:
    pvVar3 = (void *)func_00418B94(unaff_r5[4],unaff_r5 + 5,unaff_r5 + 8);
    goto switchD_0040fabc_caseD_0;
  case 0x24:
    pvVar3 = (void *)unaff_r5[4];
    *(undefined1 *)((int)pvVar3 + 0x5e) = *(undefined1 *)(unaff_r5 + 5);
    goto switchD_0040fabc_caseD_0;
  case 0x26:
    pvVar3 = (void *)func_0041AB88(unaff_r5[4],unaff_r5[5],unaff_r5[6],
                                   (uint)*(ushort *)(unaff_r5 + 7),(int)unaff_r5 + 0x1e,
                                   *(undefined1 *)((int)unaff_r5 + 0x52),
                                   *(undefined1 *)((int)unaff_r5 + 0x53),unaff_r5[0x15],
                                   unaff_r5[0x16],*(undefined1 *)(unaff_r5 + 0x18),
                                   (undefined1 *)((int)unaff_r5 + 0x61),ALBW_AS_F32(unaff_r5[0x17]));
    goto switchD_0040fabc_caseD_0;
  case 0x27:
    pvVar3 = (void *)func_0041B018(unaff_r5[4],(undefined4 *)unaff_r5[5],(char)unaff_r5[6],
                                   unaff_r5[7]);
    goto switchD_0040fabc_caseD_0;
  case 0x28:
    bVar1 = func_00419D34((int *)unaff_r5[4],(int)*(char *)(unaff_r5 + 5),(int)(unaff_r5 + 6),
                          (uint)*(ushort *)(unaff_r5 + 0xe));
    pvVar3 = (void *)(uint)bVar1;
    goto switchD_0040fabc_caseD_0;
  case 0x29:
    bVar1 = func_0041A57C((int *)unaff_r5[4],(int)*(char *)(unaff_r5 + 5),unaff_r5[6],unaff_r5[8],
                          unaff_r5[7],unaff_r5[0x11],(int)(unaff_r5 + 9),unaff_r5[0x12],
                          (int)*(char *)(unaff_r5 + 0x13));
    pvVar3 = (void *)(uint)bVar1;
    goto switchD_0040fabc_caseD_0;
  case 0x2a:
    pvVar3 = func_0041A6E8(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
    goto switchD_0040fabc_caseD_0;
  case 0x2b:
    pvVar3 = func_0041AA48(unaff_r5[4],unaff_r5[5],(char)unaff_r5[6]);
    goto switchD_0040fabc_caseD_0;
  case 0x2c:
    pvVar3 = func_0041A294(unaff_r5[4],unaff_r5[5],ALBW_AS_F32(unaff_r5[6]));
    goto switchD_0040fabc_caseD_0;
  case 0x2d:
    goto code_r0x004100c4;
  case 0x2e:
    puVar4 = func_0041C81C();
    pvVar3 = (void *)func_0041C888(puVar4,unaff_r5[4],unaff_r5[5]);
    goto switchD_0040fabc_caseD_0;
  case 0x2f:
    piVar5 = func_0041C81C();
    pvVar3 = (void *)func_0041C870(piVar5,unaff_r5[4]);
    goto switchD_0040fabc_caseD_0;
  case 0x30:
    piVar5 = func_0041C81C();
    pvVar3 = (void *)func_0041C880(piVar5,unaff_r5[4]);
    goto switchD_0040fabc_caseD_0;
  case 0x31:
    pvVar3 = (void *)func_004183E8(DAT_00410214,(uint)*(byte *)(unaff_r5 + 4),unaff_r5[5]);
    goto switchD_0040fabc_caseD_0;
  case 0x32:
    pvVar3 = (void *)func_00418320(DAT_00410214,(uint)*(byte *)(unaff_r5 + 4),unaff_r5[5]);
    goto switchD_0040fabc_caseD_0;
  case 0x33:
    pvVar3 = (void *)func_00418384(DAT_00410214,(uint)*(byte *)(unaff_r5 + 4),unaff_r5[5]);
    goto switchD_0040fabc_caseD_0;
  case 0x34:
    pvVar3 = (void *)func_00418180(DAT_00410214,(uint)*(byte *)(unaff_r5 + 4),(int *)unaff_r5[5],
                                   unaff_r5 + 6);
    goto switchD_0040fabc_caseD_0;
  case 0x35:
    pvVar3 = (void *)func_00418250(DAT_00410214,(uint)*(byte *)(unaff_r5 + 4),(int *)unaff_r5[5],
                                   unaff_r5 + 6);
    goto switchD_0040fabc_caseD_0;
  case 0x36:
    pvVar3 = (void *)func_0041810C(DAT_00410214,(uint)*(byte *)(unaff_r5 + 4),unaff_r5[6]);
    goto switchD_0040fabc_caseD_0;
  case 0x37:
    puVar6 = func_00419924();
    pvVar3 = func_00419AF4((int)puVar6,(ushort)unaff_r5[4]);
    goto switchD_0040fabc_caseD_0;
  }
  pvVar3 = (void *)(*pcVar7)();
  goto switchD_0040fabc_caseD_0;
}

