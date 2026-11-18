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

// USA 0040FAC4 <- EU 0040FAA4 (Ghidra, non-matching)
// GLOBAL DAT_0040fee8 undefined4
// GLOBAL DAT_00410214 int

uint func_0040FAC4(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  uint uVar7;
  
  piVar2 = param_1;
  do {
    if (param_1 == (int *)0x0) {
      return (uint)piVar2;
    }
    piVar2 = (int *)(uint)*(byte *)(param_1 + 1);
    switch((int)(uintptr_t)(piVar2)) {
    case 0x2:
      piVar2 = (int *)0x1;
      *(undefined1 *)param_1[4] = 1;
      break;
    case 0x3:
      (**(code **)(*(int *)param_1[4] + 8))((int *)param_1[4]);
      piVar2 = (int *)0x1;
      *(undefined1 *)param_1[5] = 1;
      break;
    case 0x4:
      pcVar6 = *(code **)(*(int *)param_1[4] + 0xc);
      goto LAB_0040fbf0;
    case 0x5:
      pcVar6 = *(code **)(*(int *)param_1[4] + 0x10);
LAB_0040fbf0:
      piVar2 = (int *)(*pcVar6)();
      break;
    case 0x6:
      if (*(char *)(param_1 + 5) != '\0') {
        *(undefined4 *)(param_1[4] + 0x14) = DAT_0040fee8;
      }
      piVar2 = (int *)(**(code **)(*(int *)param_1[4] + 0x14))((int *)param_1[4]);
      break;
    case 0x7:
      piVar2 = (int *)(**(code **)(*(int *)param_1[4] + 0x18))
                                ((int *)param_1[4],(int)*(char *)(param_1 + 5));
      break;
    case 0x8:
      *(int *)(param_1[4] + 0x14) = param_1[5];
      *(int *)(param_1[4] + 0x18) = param_1[6];
      *(int *)(param_1[4] + 0x1c) = param_1[7];
      *(int *)(param_1[4] + 0x20) = param_1[8];
      *(int *)(param_1[4] + 0x24) = param_1[9];
      func_0041959C(param_1[4],(char)param_1[10],ALBW_AS_F32(param_1[0xb]));
      uVar7 = 0;
      *(int *)(param_1[4] + 0x30) = param_1[0xc];
      do {
        piVar2 = (int *)func_004195A8(param_1[4],uVar7 & 0xff,ALBW_AS_F32(param_1[uVar7 + 0xd]));
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 2);
      break;
    case 0x9:
      piVar2 = (int *)param_1[4];
      *(undefined1 *)(piVar2 + 0xd) = *(undefined1 *)(param_1 + 5);
      break;
    case 0xa:
      piVar2 = (int *)param_1[4];
      *(undefined1 *)((int)piVar2 + 0x35) = *(undefined1 *)((int)param_1 + 0x15);
      break;
    case 0xb:
      piVar2 = (int *)param_1[4];
      *(undefined1 *)((int)piVar2 + 0x2e) = *(undefined1 *)(param_1 + 5);
      break;
    case 0xc:
      piVar2 = (int *)param_1[4];
      *(undefined1 *)(piVar2 + 4) = 0;
      break;
    case 0xd:
      func_0041BE78((int *)param_1[4],param_1 + 5);
      *(undefined1 *)(param_1[4] + 0x74) = *(undefined1 *)(param_1 + 8);
      *(undefined1 *)(param_1[4] + 0x5c) = *(undefined1 *)((int)param_1 + 0x21);
      piVar2 = (int *)func_0041BD78(param_1[4],param_1[9],param_1[10]);
      break;
    case 0xe:
      piVar2 = (int *)func_0041B844(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case 0xf:
      piVar2 = (int *)func_0041C320((int *)param_1[4],param_1 + 5);
      break;
    case 0x10:
      piVar2 = (int *)func_0041BDF4(param_1[4],param_1[5] & 0xff,param_1[6]);
      break;
    case 0x11:
      piVar2 = (int *)param_1[4];
      piVar2[0x19] = param_1[5];
      break;
    case 0x12:
      piVar2 = (int *)param_1[4];
      *(undefined1 *)(piVar2 + 0x1d) = *(undefined1 *)(param_1 + 5);
      break;
    case 0x13:
      piVar2 = (int *)func_0041BAC8(param_1[4],param_1[6],(short)param_1[7]);
      break;
    case 0x14:
      piVar2 = (int *)func_0041BAEC(param_1[6],(short)param_1[7]);
      break;
    case 0x15:
      iVar3 = func_0041B9CC(param_1[4],param_1[5]);
      piVar2 = (int *)0x0;
      if (iVar3 != 0) {
        piVar2 = (int *)func_00417194(iVar3,param_1[6],(short)param_1[7]);
      }
      break;
    case 0x16:
      piVar2 = (int *)func_0041B930(param_1[4],param_1[5],param_1[6] & 0xff);
      break;
    case 0x17:
      piVar2 = (int *)func_0041BA40(param_1[4],param_1[5],(int)*(char *)(param_1 + 6),param_1[7]);
      break;
    case 0x18:
      piVar2 = (int *)func_0041BA0C(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x19:
      piVar2 = (int *)func_0041B9B4(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x1a:
      piVar2 = (int *)func_0041B898(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x1b:
      piVar2 = (int *)func_0041BC20(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x1c:
      piVar2 = (int *)func_0041BA28(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x1d:
      piVar2 = (int *)func_0041BAD4(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x1e:
      piVar2 = (int *)func_0041BC38(param_1[4],param_1[5],param_1[6],ALBW_AS_F32(param_1[7]));
      break;
    case 0x1f:
      piVar2 = (int *)func_0041BB00(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x20:
      piVar2 = (int *)func_0041BB9C(param_1[4],param_1[5],(int)*(char *)(param_1 + 6));
      break;
    case 0x21:
      piVar2 = (int *)func_0041BCC8(param_1[4],param_1[5],(uint)*(byte *)(param_1 + 6));
      break;
    case 0x22:
      piVar2 = (int *)func_00419288(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case 0x23:
      piVar2 = (int *)func_00418B94(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case 0x24:
      piVar2 = (int *)param_1[4];
      *(undefined1 *)((int)piVar2 + 0x5e) = *(undefined1 *)(param_1 + 5);
      break;
    case 0x26:
      piVar2 = (int *)func_0041AB88(param_1[4],param_1[5],param_1[6],(uint)*(ushort *)(param_1 + 7),
                                    (int)param_1 + 0x1e,*(undefined1 *)((int)param_1 + 0x52),
                                    *(undefined1 *)((int)param_1 + 0x53),param_1[0x15],param_1[0x16]
                                    ,*(undefined1 *)(param_1 + 0x18),
                                    (undefined1 *)((int)param_1 + 0x61),ALBW_AS_F32(param_1[0x17]));
      break;
    case 0x27:
      piVar2 = (int *)func_0041B018(param_1[4],(undefined4 *)param_1[5],(char)param_1[6],param_1[7])
      ;
      break;
    case 0x28:
      bVar1 = func_00419D34((int *)param_1[4],(int)*(char *)(param_1 + 5),(int)(param_1 + 6),
                            (uint)*(ushort *)(param_1 + 0xe));
      piVar2 = (int *)(uint)bVar1;
      break;
    case 0x29:
      bVar1 = func_0041A57C((int *)param_1[4],(int)*(char *)(param_1 + 5),param_1[6],param_1[8],
                            param_1[7],param_1[0x11],(int)(param_1 + 9),param_1[0x12],
                            (int)*(char *)(param_1 + 0x13));
      piVar2 = (int *)(uint)bVar1;
      break;
    case 0x2a:
      piVar2 = func_0041A6E8(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x2b:
      piVar2 = func_0041AA48(param_1[4],param_1[5],(char)param_1[6]);
      break;
    case 0x2c:
      piVar2 = func_0041A294(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x2d:
      piVar2 = func_0041AA08(param_1[4],param_1[5],ALBW_AS_F32(param_1[6]));
      break;
    case 0x2e:
      puVar4 = func_0041C81C();
      piVar2 = (int *)func_0041C888(puVar4,param_1[4],param_1[5]);
      break;
    case 0x2f:
      piVar2 = func_0041C81C();
      piVar2 = (int *)func_0041C870(piVar2,param_1[4]);
      break;
    case 0x30:
      piVar2 = func_0041C81C();
      piVar2 = (int *)func_0041C880(piVar2,param_1[4]);
      break;
    case 0x31:
      piVar2 = (int *)func_004183E8(DAT_00410214,(uint)*(byte *)(param_1 + 4),param_1[5]);
      break;
    case 0x32:
      piVar2 = (int *)func_00418320(DAT_00410214,(uint)*(byte *)(param_1 + 4),param_1[5]);
      break;
    case 0x33:
      piVar2 = (int *)func_00418384(DAT_00410214,(uint)*(byte *)(param_1 + 4),param_1[5]);
      break;
    case 0x34:
      piVar2 = (int *)func_00418180(DAT_00410214,(uint)*(byte *)(param_1 + 4),(int *)param_1[5],
                                    param_1 + 6);
      break;
    case 0x35:
      piVar2 = (int *)func_00418250(DAT_00410214,(uint)*(byte *)(param_1 + 4),(int *)param_1[5],
                                    param_1 + 6);
      break;
    case 0x36:
      piVar2 = (int *)func_0041810C(DAT_00410214,(uint)*(byte *)(param_1 + 4),param_1[6]);
      break;
    case 0x37:
      puVar5 = func_00419924();
      piVar2 = func_00419AF4((int)puVar5,(ushort)param_1[4]);
    }
    param_1 = (int *)*param_1;
  } while( true );
}

