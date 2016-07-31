#include "encode.h"

void setup8B10B() {

	// rd must be always initilized as negative
	rd = -1;
}

unsigned int encode8B10B(unsigned char data) {

	switch (data) {
		case 0u:
			return (rd < 0 ? 628u : 395u);
			break;
		case 1u:
			return (rd < 0 ? 468u : 555u);
			break;
		case 2u:
			return (rd < 0 ? 724u : 299u);
			break;
		case 3u:
			rd *= -1;
			return (rd > 0 ? 795u : 788u);
			break;
		case 4u:
			return (rd < 0 ? 852u : 171u);
			break;
		case 5u:
			rd *= -1;
			return (rd > 0 ? 667u : 660u);
			break;
		case 6u:
			rd *= -1;
			return (rd > 0 ? 411u : 404u);
			break;
		case 7u:
			rd *= -1;
			return (rd > 0 ? 907u : 116u);
			break;
		case 8u:
			return (rd < 0 ? 916u : 107u);
			break;
		case 9u:
			rd *= -1;
			return (rd > 0 ? 603u : 596u);
			break;
		case 10u:
			rd *= -1;
			return (rd > 0 ? 347u : 340u);
			break;
		case 11u:
			rd *= -1;
			return (rd > 0 ? 843u : 836u);
			break;
		case 12u:
			rd *= -1;
			return (rd > 0 ? 219u : 212u);
			break;
		case 13u:
			rd *= -1;
			return (rd > 0 ? 715u : 708u);
			break;
		case 14u:
			rd *= -1;
			return (rd > 0 ? 459u : 452u);
			break;
		case 15u:
			return (rd < 0 ? 372u : 651u);
			break;
		case 16u:
			return (rd < 0 ? 436u : 587u);
			break;
		case 17u:
			rd *= -1;
			return (rd > 0 ? 571u : 564u);
			break;
		case 18u:
			rd *= -1;
			return (rd > 0 ? 315u : 308u);
			break;
		case 19u:
			rd *= -1;
			return (rd > 0 ? 811u : 804u);
			break;
		case 20u:
			rd *= -1;
			return (rd > 0 ? 187u : 180u);
			break;
		case 21u:
			rd *= -1;
			return (rd > 0 ? 683u : 676u);
			break;
		case 22u:
			rd *= -1;
			return (rd > 0 ? 427u : 420u);
			break;
		case 23u:
			return (rd < 0 ? 932u : 91u);
			break;
		case 24u:
			return (rd < 0 ? 820u : 203u);
			break;
		case 25u:
			rd *= -1;
			return (rd > 0 ? 619u : 612u);
			break;
		case 26u:
			rd *= -1;
			return (rd > 0 ? 363u : 356u);
			break;
		case 27u:
			return (rd < 0 ? 868u : 155u);
			break;
		case 28u:
			rd *= -1;
			return (rd > 0 ? 235u : 228u);
			break;
		case 29u:
			return (rd < 0 ? 740u : 283u);
			break;
		case 30u:
			return (rd < 0 ? 484u : 539u);
			break;
		case 31u:
			return (rd < 0 ? 692u : 331u);
			break;
		case 32u:
			rd *= -1;
			return (rd > 0 ? 633u : 393u);
			break;
		case 33u:
			rd *= -1;
			return (rd > 0 ? 473u : 553u);
			break;
		case 34u:
			rd *= -1;
			return (rd > 0 ? 729u : 297u);
			break;
		case 35u:
			return 793u;
			break;
		case 36u:
			rd *= -1;
			return (rd > 0 ? 857u : 169u);
			break;
		case 37u:
			return 665u;
			break;
		case 38u:
			return 409u;
			break;
		case 39u:
			return (rd < 0 ? 905u : 121u);
			break;
		case 40u:
			rd *= -1;
			return (rd > 0 ? 921u : 105u);
			break;
		case 41u:
			return 601u;
			break;
		case 42u:
			return 345u;
			break;
		case 43u:
			return 841u;
			break;
		case 44u:
			return 217u;
			break;
		case 45u:
			return 713u;
			break;
		case 46u:
			return 457u;
			break;
		case 47u:
			rd *= -1;
			return (rd > 0 ? 377u : 649u);
			break;
		case 48u:
			rd *= -1;
			return (rd > 0 ? 441u : 585u);
			break;
		case 49u:
			return 569u;
			break;
		case 50u:
			return 313u;
			break;
		case 51u:
			return 809u;
			break;
		case 52u:
			return 185u;
			break;
		case 53u:
			return 681u;
			break;
		case 54u:
			return 425u;
			break;
		case 55u:
			rd *= -1;
			return (rd > 0 ? 937u : 89u);
			break;
		case 56u:
			rd *= -1;
			return (rd > 0 ? 825u : 201u);
			break;
		case 57u:
			return 617u;
			break;
		case 58u:
			return 361u;
			break;
		case 59u:
			rd *= -1;
			return (rd > 0 ? 873u : 153u);
			break;
		case 60u:
			return 233u;
			break;
		case 61u:
			rd *= -1;
			return (rd > 0 ? 745u : 281u);
			break;
		case 62u:
			rd *= -1;
			return (rd > 0 ? 489u : 537u);
			break;
		case 63u:
			rd *= -1;
			return (rd > 0 ? 697u : 329u);
			break;
		case 64u:
			rd *= -1;
			return (rd > 0 ? 629u : 389u);
			break;
		case 65u:
			rd *= -1;
			return (rd > 0 ? 469u : 549u);
			break;
		case 66u:
			rd *= -1;
			return (rd > 0 ? 725u : 293u);
			break;
		case 67u:
			return 789u;
			break;
		case 68u:
			rd *= -1;
			return (rd > 0 ? 853u : 165u);
			break;
		case 69u:
			return 661u;
			break;
		case 70u:
			return 405u;
			break;
		case 71u:
			return (rd < 0 ? 901u : 117u);
			break;
		case 72u:
			rd *= -1;
			return (rd > 0 ? 917u : 101u);
			break;
		case 73u:
			return 597u;
			break;
		case 74u:
			return 341u;
			break;
		case 75u:
			return 837u;
			break;
		case 76u:
			return 213u;
			break;
		case 77u:
			return 709u;
			break;
		case 78u:
			return 453u;
			break;
		case 79u:
			rd *= -1;
			return (rd > 0 ? 373u : 645u);
			break;
		case 80u:
			rd *= -1;
			return (rd > 0 ? 437u : 581u);
			break;
		case 81u:
			return 565u;
			break;
		case 82u:
			return 309u;
			break;
		case 83u:
			return 805u;
			break;
		case 84u:
			return 181u;
			break;
		case 85u:
			return 677u;
			break;
		case 86u:
			return 421u;
			break;
		case 87u:
			rd *= -1;
			return (rd > 0 ? 933u : 85u);
			break;
		case 88u:
			rd *= -1;
			return (rd > 0 ? 821u : 197u);
			break;
		case 89u:
			return 613u;
			break;
		case 90u:
			return 357u;
			break;
		case 91u:
			rd *= -1;
			return (rd > 0 ? 869u : 149u);
			break;
		case 92u:
			return 229u;
			break;
		case 93u:
			rd *= -1;
			return (rd > 0 ? 741u : 277u);
			break;
		case 94u:
			rd *= -1;
			return (rd > 0 ? 485u : 533u);
			break;
		case 95u:
			rd *= -1;
			return (rd > 0 ? 693u : 325u);
			break;
		case 96u:
			rd *= -1;
			return (rd > 0 ? 627u : 396u);
			break;
		case 97u:
			rd *= -1;
			return (rd > 0 ? 467u : 556u);
			break;
		case 98u:
			rd *= -1;
			return (rd > 0 ? 723u : 300u);
			break;
		case 99u:
			return (rd < 0 ? 796u : 787u);
			break;
		case 100u:
			rd *= -1;
			return (rd > 0 ? 851u : 172u);
			break;
		case 101u:
			return (rd < 0 ? 668u : 659u);
			break;
		case 102u:
			return (rd < 0 ? 412u : 403u);
			break;
		case 103u:
			return (rd < 0 ? 908u : 115u);
			break;
		case 104u:
			rd *= -1;
			return (rd > 0 ? 915u : 108u);
			break;
		case 105u:
			return (rd < 0 ? 604u : 595u);
			break;
		case 106u:
			return (rd < 0 ? 348u : 339u);
			break;
		case 107u:
			return (rd < 0 ? 844u : 835u);
			break;
		case 108u:
			return (rd < 0 ? 220u : 211u);
			break;
		case 109u:
			return (rd < 0 ? 716u : 707u);
			break;
		case 110u:
			return (rd < 0 ? 460u : 451u);
			break;
		case 111u:
			rd *= -1;
			return (rd > 0 ? 371u : 652u);
			break;
		case 112u:
			rd *= -1;
			return (rd > 0 ? 435u : 588u);
			break;
		case 113u:
			return (rd < 0 ? 572u : 563u);
			break;
		case 114u:
			return (rd < 0 ? 316u : 307u);
			break;
		case 115u:
			return (rd < 0 ? 812u : 803u);
			break;
		case 116u:
			return (rd < 0 ? 188u : 179u);
			break;
		case 117u:
			return (rd < 0 ? 684u : 675u);
			break;
		case 118u:
			return (rd < 0 ? 428u : 419u);
			break;
		case 119u:
			rd *= -1;
			return (rd > 0 ? 931u : 92u);
			break;
		case 120u:
			rd *= -1;
			return (rd > 0 ? 819u : 204u);
			break;
		case 121u:
			return (rd < 0 ? 620u : 611u);
			break;
		case 122u:
			return (rd < 0 ? 364u : 355u);
			break;
		case 123u:
			rd *= -1;
			return (rd > 0 ? 867u : 156u);
			break;
		case 124u:
			return (rd < 0 ? 236u : 227u);
			break;
		case 125u:
			rd *= -1;
			return (rd > 0 ? 739u : 284u);
			break;
		case 126u:
			rd *= -1;
			return (rd > 0 ? 483u : 540u);
			break;
		case 127u:
			rd *= -1;
			return (rd > 0 ? 691u : 332u);
			break;
		case 128u:
			return (rd < 0 ? 626u : 397u);
			break;
		case 129u:
			return (rd < 0 ? 466u : 557u);
			break;
		case 130u:
			return (rd < 0 ? 722u : 301u);
			break;
		case 131u:
			rd *= -1;
			return (rd > 0 ? 797u : 786u);
			break;
		case 132u:
			return (rd < 0 ? 850u : 173u);
			break;
		case 133u:
			rd *= -1;
			return (rd > 0 ? 669u : 658u);
			break;
		case 134u:
			rd *= -1;
			return (rd > 0 ? 413u : 402u);
			break;
		case 135u:
			rd *= -1;
			return (rd > 0 ? 909u : 114u);
			break;
		case 136u:
			return (rd < 0 ? 914u : 109u);
			break;
		case 137u:
			rd *= -1;
			return (rd > 0 ? 605u : 594u);
			break;
		case 138u:
			rd *= -1;
			return (rd > 0 ? 349u : 338u);
			break;
		case 139u:
			rd *= -1;
			return (rd > 0 ? 845u : 834u);
			break;
		case 140u:
			rd *= -1;
			return (rd > 0 ? 221u : 210u);
			break;
		case 141u:
			rd *= -1;
			return (rd > 0 ? 717u : 706u);
			break;
		case 142u:
			rd *= -1;
			return (rd > 0 ? 461u : 450u);
			break;
		case 143u:
			return (rd < 0 ? 370u : 653u);
			break;
		case 144u:
			return (rd < 0 ? 434u : 589u);
			break;
		case 145u:
			rd *= -1;
			return (rd > 0 ? 573u : 562u);
			break;
		case 146u:
			rd *= -1;
			return (rd > 0 ? 317u : 306u);
			break;
		case 147u:
			rd *= -1;
			return (rd > 0 ? 813u : 802u);
			break;
		case 148u:
			rd *= -1;
			return (rd > 0 ? 189u : 178u);
			break;
		case 149u:
			rd *= -1;
			return (rd > 0 ? 685u : 674u);
			break;
		case 150u:
			rd *= -1;
			return (rd > 0 ? 429u : 418u);
			break;
		case 151u:
			return (rd < 0 ? 930u : 93u);
			break;
		case 152u:
			return (rd < 0 ? 818u : 205u);
			break;
		case 153u:
			rd *= -1;
			return (rd > 0 ? 621u : 610u);
			break;
		case 154u:
			rd *= -1;
			return (rd > 0 ? 365u : 354u);
			break;
		case 155u:
			return (rd < 0 ? 866u : 157u);
			break;
		case 156u:
			rd *= -1;
			return (rd > 0 ? 237u : 226u);
			break;
		case 157u:
			return (rd < 0 ? 738u : 285u);
			break;
		case 158u:
			return (rd < 0 ? 482u : 541u);
			break;
		case 159u:
			return (rd < 0 ? 690u : 333u);
			break;
		case 160u:
			rd *= -1;
			return (rd > 0 ? 634u : 394u);
			break;
		case 161u:
			rd *= -1;
			return (rd > 0 ? 474u : 554u);
			break;
		case 162u:
			rd *= -1;
			return (rd > 0 ? 730u : 298u);
			break;
		case 163u:
			return 794u;
			break;
		case 164u:
			rd *= -1;
			return (rd > 0 ? 858u : 170u);
			break;
		case 165u:
			return 666u;
			break;
		case 166u:
			return 410u;
			break;
		case 167u:
			return (rd < 0 ? 906u : 122u);
			break;
		case 168u:
			rd *= -1;
			return (rd > 0 ? 922u : 106u);
			break;
		case 169u:
			return 602u;
			break;
		case 170u:
			return 346u;
			break;
		case 171u:
			return 842u;
			break;
		case 172u:
			return 218u;
			break;
		case 173u:
			return 714u;
			break;
		case 174u:
			return 458u;
			break;
		case 175u:
			rd *= -1;
			return (rd > 0 ? 378u : 650u);
			break;
		case 176u:
			rd *= -1;
			return (rd > 0 ? 442u : 586u);
			break;
		case 177u:
			return 570u;
			break;
		case 178u:
			return 314u;
			break;
		case 179u:
			return 810u;
			break;
		case 180u:
			return 186u;
			break;
		case 181u:
			return 682u;
			break;
		case 182u:
			return 426u;
			break;
		case 183u:
			rd *= -1;
			return (rd > 0 ? 938u : 90u);
			break;
		case 184u:
			rd *= -1;
			return (rd > 0 ? 826u : 202u);
			break;
		case 185u:
			return 618u;
			break;
		case 186u:
			return 362u;
			break;
		case 187u:
			rd *= -1;
			return (rd > 0 ? 874u : 154u);
			break;
		case 188u:
			return 234u;
			break;
		case 189u:
			rd *= -1;
			return (rd > 0 ? 746u : 282u);
			break;
		case 190u:
			rd *= -1;
			return (rd > 0 ? 490u : 538u);
			break;
		case 191u:
			rd *= -1;
			return (rd > 0 ? 698u : 330u);
			break;
		case 192u:
			rd *= -1;
			return (rd > 0 ? 630u : 390u);
			break;
		case 193u:
			rd *= -1;
			return (rd > 0 ? 470u : 550u);
			break;
		case 194u:
			rd *= -1;
			return (rd > 0 ? 726u : 294u);
			break;
		case 195u:
			return 790u;
			break;
		case 196u:
			rd *= -1;
			return (rd > 0 ? 854u : 166u);
			break;
		case 197u:
			return 662u;
			break;
		case 198u:
			return 406u;
			break;
		case 199u:
			return (rd < 0 ? 902u : 118u);
			break;
		case 200u:
			rd *= -1;
			return (rd > 0 ? 918u : 102u);
			break;
		case 201u:
			return 598u;
			break;
		case 202u:
			return 342u;
			break;
		case 203u:
			return 838u;
			break;
		case 204u:
			return 214u;
			break;
		case 205u:
			return 710u;
			break;
		case 206u:
			return 454u;
			break;
		case 207u:
			rd *= -1;
			return (rd > 0 ? 374u : 646u);
			break;
		case 208u:
			rd *= -1;
			return (rd > 0 ? 438u : 582u);
			break;
		case 209u:
			return 566u;
			break;
		case 210u:
			return 310u;
			break;
		case 211u:
			return 806u;
			break;
		case 212u:
			return 182u;
			break;
		case 213u:
			return 678u;
			break;
		case 214u:
			return 422u;
			break;
		case 215u:
			rd *= -1;
			return (rd > 0 ? 934u : 86u);
			break;
		case 216u:
			rd *= -1;
			return (rd > 0 ? 822u : 198u);
			break;
		case 217u:
			return 614u;
			break;
		case 218u:
			return 358u;
			break;
		case 219u:
			rd *= -1;
			return (rd > 0 ? 870u : 150u);
			break;
		case 220u:
			return 230u;
			break;
		case 221u:
			rd *= -1;
			return (rd > 0 ? 742u : 278u);
			break;
		case 222u:
			rd *= -1;
			return (rd > 0 ? 486u : 534u);
			break;
		case 223u:
			rd *= -1;
			return (rd > 0 ? 694u : 326u);
			break;
		case 224u:
			return (rd < 0 ? 625u : 398u);
			break;
		case 225u:
			return (rd < 0 ? 465u : 558u);
			break;
		case 226u:
			return (rd < 0 ? 721u : 302u);
			break;
		case 227u:
			rd *= -1;
			return (rd > 0 ? 798u : 785u);
			break;
		case 228u:
			return (rd < 0 ? 849u : 174u);
			break;
		case 229u:
			rd *= -1;
			return (rd > 0 ? 670u : 657u);
			break;
		case 230u:
			rd *= -1;
			return (rd > 0 ? 414u : 401u);
			break;
		case 231u:
			rd *= -1;
			return (rd > 0 ? 910u : 113u);
			break;
		case 232u:
			return (rd < 0 ? 913u : 110u);
			break;
		case 233u:
			rd *= -1;
			return (rd > 0 ? 606u : 593u);
			break;
		case 234u:
			rd *= -1;
			return (rd > 0 ? 350u : 337u);
			break;
		case 235u:
			rd *= -1;
			return (rd > 0 ? 846u : 840u);
			break;
		case 236u:
			rd *= -1;
			return (rd > 0 ? 222u : 209u);
			break;
		case 237u:
			rd *= -1;
			return (rd > 0 ? 718u : 712u);
			break;
		case 238u:
			rd *= -1;
			return (rd > 0 ? 462u : 456u);
			break;
		case 239u:
			return (rd < 0 ? 369u : 654u);
			break;
		case 240u:
			return (rd < 0 ? 433u : 590u);
			break;
		case 241u:
			rd *= -1;
			return (rd > 0 ? 567u : 561u);
			break;
		case 242u:
			rd *= -1;
			return (rd > 0 ? 311u : 305u);
			break;
		case 243u:
			rd *= -1;
			return (rd > 0 ? 814u : 801u);
			break;
		case 244u:
			rd *= -1;
			return (rd > 0 ? 183u : 177u);
			break;
		case 245u:
			rd *= -1;
			return (rd > 0 ? 686u : 673u);
			break;
		case 246u:
			rd *= -1;
			return (rd > 0 ? 430u : 417u);
			break;
		case 247u:
			return (rd < 0 ? 929u : 94u);
			break;
		case 248u:
			return (rd < 0 ? 817u : 206u);
			break;
		case 249u:
			rd *= -1;
			return (rd > 0 ? 622u : 609u);
			break;
		case 250u:
			rd *= -1;
			return (rd > 0 ? 366u : 353u);
			break;
		case 251u:
			return (rd < 0 ? 865u : 158u);
			break;
		case 252u:
			rd *= -1;
			return (rd > 0 ? 238u : 225u);
			break;
		case 253u:
			return (rd < 0 ? 737u : 286u);
			break;
		case 254u:
			return (rd < 0 ? 481u : 542u);
			break;
		case 255u:
			return (rd < 0 ? 689u : 334u);
			break;
	}
}
