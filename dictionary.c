#include <stdio.h>
#include <string.h>
#include <windows.h>

int total_word_count();

void confirm_continue();
void search_dictionary();
void created_by();




/*dictionary structure or how many things in dictionary that means word and word meanings*/

/*start, dictionary structure*/
struct word_store_formate
{
    char main_word[25];
    char word_meaning[50];
}; /*end, dictionary structure*/


/*store all word's and it's meaning*/

//start, word store
struct word_store_formate word_store[]  =
{
    {"",                ""},
    {"abash",           "lojja deya" },
    {"abaft",          "jahajer pisoner ordangso" },
    {"abaddon",         "norok" },
    {"afraid",          "voy / vito"},
    {"abase",            "opomanito kora"},
    {"abbey",            "mot"},
    {"aberrant",            "bipodgami"},
    {"abhor",            "grina sohokara porihar kora"},
    {"abhorrent",            "grina"},
    {"able",            "sokkom"},
    {"ablution",            "acomon"},
    {"abnormal",            "osavabik"},
    {"abode",            "basstan"},
    {"avobe",            "upora"},
    {"abroad",            "bidesh"},
    {"absent",            "onupustit"},
    {"absolute",            "sompurno"},
    {"abstract",            "prithok kora"},
    {"abuse",            "galgali deya"},
    {"abus",            "seshoaya"},
    {"academic",            "sikkyotonic"},
    {"acceleration",            "toron"},
    {"accept",            "grohon"},
    {"acceptance",            "grohon joggota"},
    {"access",            "probesh"},
    {"accident",            "durghotona"},
    {"accommodation",            "basstan"},
    {"accompany",            "songa thaka"},
    {"according",            "onusara"},
    {"action",            "kriya"},
    {"acid",            "omlo"},
    {"acknowledgement",            "sikar"},
    {"activity",            "kriya kormo"},
    {"actor",         "ovineta"},
    {"actually",          "prokito pokka" },
    {"add",           "jog kora"},
    {"addition",             "bridhi"},
    {"address",            "tikana" },
    {"adequate",          "porjapto"},
    {"adhoc",            "bishes uddesa goritho"},
    {"adjust",        "somonnoy kora" },
    {"admin",           "admin" },
    {"advise",             "poramorsho"},
    {"advisor",            "poramorshok"},
    {"advocate",          "ukail" },
    {"aeroplane",           "urojahaj"},
    {"aeronautics",            "biman chalanor bidda"},
    {"affection",             "onurag"},
    {"affiliation",            "asokti"},
    {"afford",            "somortho"},
    {"afraid",           "voy"},
    {"afternoon",      "bikal bela"},
    {"again",        "bar bar"},
    {"against",               "birudha"},
    {"age",             "boyos"},
    {"agency",            "madhom"},
    {"agenda",             "suchi"},
    {"agent",            "protindhi"},
    {"aggresive",            "akkromonatok"},
    {"agile",             "choncol"},
    {"ago",            "otita"},
    {"agree",        "sommoto"},
    {"agreement",            "chukti"},
    {"agricultural",            "krisibisayok"},
    {"agriculture",            "krisi"},
    {"ah",              "hay"},
    {"ahead",           "aga"},
    {"aid",          "sahajo"},
    {"aim",            "lokko"},
    {"air",           "bayu"},
    {"airline",            "jatri bahi biman"},
    {"airway",          "j potha biman chalacol kora"},
    {"album",             "photo graph"},
    {"alcohol",             "alcohol"},
    {"algebra",            "bijgonit"},
    {"algorithm",            "kriya podhoti"},
    {"alien",           "bideshi lok"},
    {"alive",           "jibito"},
    {"all",         "sob"},
    {"allah",           "allah"},
    {"allocate",          "boraddo"},
    {"allocation",            "boraddo kora"},
    {"allow",           "onumodon deya"},
    {"almighty",             "sorboshoktiman"},
    {"almost",         "pray"},
    {"alone",            "aka"},
    {"along",            "nissongo"},
    {"alphabet",             "bornomala"},
    {"also",            "aro"},
    {"alternative",           "bikolpo"},
    {"aluminium",           "aluminium"},
    {"always",        "sobsomoy"},
    {"ambassador",          "rasto dut"},
    {"amateur",         "opasadhar"},
    {"amazon",           "amazon"},
    {"ambition",             "ucco akankha"},
    {"amplify",            "bibordhon kora"},
    {"amplitude",           "bistar"},
    {"analysis",         "bislashon"},
    {"anatomy",         "sorir totto"},
    {"anchor",         "noggor kora"},
    {"ancient",            "prachin"},
    {"angel",             "firista"},
    {"angry",            "ragi"},
    {"animal",            "prani"},
    {"animation",            "animation"},
    {"announcement",            "ghosona"},
    {"annually",            "barsik" },
    {"answer",            "uttor" },
    {"ant",            "pipra" },
    {"any",            "jkono" },
    {"anybody",            "jkew" },
    {"anyway",            "jkono upaya" },
    {"apollo",            "apollo" },
    {"apology",            "khoma" },
    {"apparent",            "apato" },
    {"apparatus",            "jontropati" },
    {"apple",            "apel" },
    {"applicable",            "projojo" },
    {"application",            "abadon" },
    {"apply",            "proyog" },
    {"appoint",            "nijukto kora" },
    {"apporach",            "probesh" },
    {"appropriate",            "upojukto" },
    {"approval",            "onumodon" },
    {"apporove",            "onumodon kora" },
    {"approximate",            "motamuti" },
    {"arabic",            "arbi" },
    {"architecture",            "nirman/stap-po" },
    {"area",            "onchol" },
    {"argument",            "perito man" },
    {"aristocracy",            "ovijattontro" },
    {"arm",            "bahu" },
    {"army",            "sena bahini" },
    {"armpit",            "bogol" },
    {"arrangement",            "su-sojjayon" },
    {"arrest",            "grapter" },
    {"arrrival",            "agomon" },
    {"art",            "shilpo" },
    {"articles",            "nibondho" },
    {"artificial",            "kritim" },
    {"artist",            "silpi" },
    {"ascending",            "choto theka boro" },
    {"ash",            "sai" },
    {"asleep",            "ghumonto" },
    {"ass",            "gadha" },
    {"assembly",            "bidhan sova" },
    {"assessment",            "nirdharon" },
    {"asset",            "bisoy sompoti" },
    {"associate",            "sohojog kora" },
    {"assumption",            "onuman" },
    {"astronomy",            "jortibidda" },
    {"astronaut",            "mohasunno chari" },
    {"atom",            "poromanu" },
    {"attack",            "akkoromon" },
    {"attempt",            "prochesta" },
    {"attendance",            "hajira" },
    {"attention",            "monojog" },
    {"attract",            "akorshon kora" },
    {"audience",            "dorshok" },
    {"audit",            "hisab porikhon" },
    {"auspicious",            "mongol jonok" },
    {"authentic",            "okritim" },
    {"author",            "lekhok" },
    {"authority",            "kortipokko" },
    {"autobiography",            "attojiboni" },
    {"automatically",            "soyonkriyo" },
    {"autumn",            "sorotkal" },
    {"available",            "prapti saddo" },
    {"average",            "gor" },
    {"aviation",            "biman cholacol" },
    {"avoid",            "ariya chola" },
    {"await",            "opekha kora" },
    {"award",            "puroskar" },
    {"awareness",            "sabdhanota" },
    {"away",            "dura" },
    {"axiom",            "protipaddo" },
    {"babble",            "adho adho bol" },
    {"baby",            "shishu" },
    {"bachelor",            "snatok" },
    {"back",            "pisona" },
    {"backbone",            "merudondo" },
    {"background",            "potbhumi" },
    {"backspace",            "bakspes" },
    {"backup",            "backup" },
    {"bad",            "kharap" },
    {"bag",            "tholi" },
    {"bail",            "jamin" },
    {"balance",            "varsammo" },
    {"ball",            "ball" },
    {"bamboo",            "bas" },
    {"banana",            "kola" },
    {"banker",            "mohajon" },
    {"barber",            "napit" },
    {"base",            "vitti" },
    {"baseball",            "baseball" },
    {"basic",            "prathomic" },
    {"bath",            "gosol" },
    {"bathroom",            "gosolghar" },
    {"battlefield",            "juddo khetro" },
    {"bazar",            "bazar" },
    {"beach",            "somudro soikot" },
    {"bear",            "valuk" },
    {"beat",            "porajito kora" },
    {"beautiful",            "sundor" },
    {"because",            "karon" },
    {"become",            "haoya" },
    {"bed",            "bisana" },
    {"before",            "purba" },
    {"begin",            "suru haoya" },
    {"behave",            "acaron" },
    {"behold",            "dekha" },
    {"being",            "haoya" },
    {"belief",            "bissas" },
    {"belong",            "ontorvukto" },
    {"below",            "nicha" },
    {"benefits",            "subidha" },
    {"beside",            "pasha" },
    {"best",            "sorbouttom" },
    {"better",            "tulonamulok valo" },
    {"biannual",            "dibarsik" },
    {"bio-medical",            "joibo rasayonic" },
    {"binocular",            "durbin" },
    {"bio-chemical",            "jaibo rosayon" },
    {"bio-engineer",            "joibo projuctibid" },
    {"biography",            "jiboni" },
    {"biology",            "jib-biggan" },
    {"bird",            "pakhi" },
    {"birth",            "jonmo" },
    {"black",            "kalo" },
    {"blacklist",            "kalo talika vukto" },
    {"blame",            "dosarop deya" },
    {"blank",            "faka" },
    {"bleed",            "rokto khoron haoya" },
    {"bless",            "asirbad kora" },
    {"blind",            "ondho" },
    {"blog",            "blog" },
    {"blood",            "rokto" },
    {"blue",            "nill" },
    {"boar",            "bonno sukor" },
    {"board",            "board" },
    {"boarder",            "abasik" },
    {"boat",            "nouka" },
    {"bodyguard",            "deho rokki" },
    {"boil",            "siddo" },
    {"bomb",            "boma" },
    {"bomber",            "boma hamla kari" },
    {"boob",            "ston" },
    {"bonus",            "odibritii" },
    {"booklet",            "pustika" },
    {"bookmarks",            "bookmarks"},
    {"boost",            "goti bridhi"},
    {"border",            "simirekha"},
    {"borrow",            "dhar kora"},
    {"botched",            "joratali deya"},
    {"boundary",            "simana"},
    {"box",            "baxo"},
    {"boycott",            "borjon kora" },
    {"bra",            "bokkobondhoni" },
    {"brackets",            "bondhoni" },
    {"branch",            "shakha" },
    {"brand",            "brand" },
    {"brave",            "sahosi" },
    {"break",            "vanga" },
    {"breath",            "sas prosas" },
    {"brief",            "songkipto" },
    {"broad",            "bapok" },
    {"broadcast",            "somprochar" },
    {"broken",            "vanga" },
    {"broker",            "dalal" },
    {"brother",            "vai" },
    {"brown",            "khayari" },
    {"buddy",            "bondu" },
    {"budget",            "budget" },
    {"bug",            "program truti" },
    {"build",            "gora" },
    {"bulk",            "odikangso" },
    {"burn",            "porano" },
    {"burst",            "bisforito haoya" },
    {"business",            "babosa" },
    {"buy",            "kena" },
    {"by",            "dara" },
    {"bye",            "biday" },
    {"bytes",            "bytes" },
    {"cable",            "cable" },
    {"cafe",            "rastora" },
    {"cake",            "cake" },
    {"caffeine",            "coffe" },
    {"calculate",            "gonona" },
    {"calender",            "borshoponji" },
    {"call",            "dak deya" },
    {"camel",            "uot" },
    {"camp",            "shibir" },
    {"campaign",            "ovijan" },
    {"campus",            "campus" },
    {"cancel",            "bad deya" },
    {"candidate",            "prathi" },
    {"canvas",            "chittropot" },
    {"capability",            "sokkomota" },
    {"capable",            "sokkom" },
    {"capacity",            "khomata" },
    {"captain",            "odinayok" },
    {"career",            "jibika" },
    {"carefully",            "jotnosohokara" },
    {"careless",            "omonojogi" },
    {"carnival",            "mohautsob" },
    {"carrier",            "bahok" },
    {"carry",            "bohon" },
    {"case",            "ghotona" },
    {"catalogue",            "talika" },
    {"catch",            "dhora" },
    {"caption",            "sironam" },
    {"cash",            "nogot" },
    {"cast",            "nikhap kora" },
    {"casually",            "samoyikvaba" },
    {"catch",            "dhora" },
    {"catholic",            "sarbojonin" },
    {"cause",            "karon" },
    {"celebrate",            "udjapon" },
    {"cell",            "khudro kokko" },
    {"center",            "kendro" },
    {"central",            "kendrio" },
    {"century",            "sotabdi" },
    {"certificates",            "sonodpotro" },
    {"chairman",            "sovapoti" },
    {"chance",            "sujog" },
    {"change",            "poriborton" },
    {"chapter",            "oddohay" },
    {"char",            "okkor" },
    {"character",            "borno" },
    {"characteristic",            "boisisto" },
    {"chart",            "talika" },
    {"chat",            "adda" },
    {"cheap",            "sosta" },
    {"check",            "porik-kha kora" },
    {"chief",            "mukkho" },
    {"child",            "shishu" },
    {"choose",            "posondo" },
    {"circle",            "britto" },
    {"circular",            "brittakar" },
    {"circus",            "circus" },
    {"citizen",            "nagorik" },
    {"city",            "sohor" },
    {"civilian",            "besamorik bakti" },
    {"class",            "srani" },
    {"classical",            "puraton" },
    {"classification",            "srinibivag" },
    {"clear",            "poriskar" },
    {"clever",            "chalak" },
    {"clearly",            "poriskervaba" },
    {"client",            "grahok" },
    {"clock",            "ghori" },
    {"close",            "bondo" },
    {"cloud",            "megh" },
    {"club",            "club" },
    {"coin",            "mudra" },
    {"colleague",            "sohokormi" },
    {"collection",            "song-groho" },
    {"colour",            "rong" },
    {"contact",            "jogajog" },
    {"content",           "vitorer upadan" },
    {"contract",            "chukti" },
    {"controal",            "niyontron" },
    {"convert",            "rupantor" },
    {"cook",            "ranna" },
    {"cop",            "pulis" },
    {"copy",            "nokol" },
    {"correct",            "sotik" },
    {"cost",            "kharoch" },
    {"costume",            "posak" },
    {"couple",            "dompoti" },
    {"course",            "bisoy" },
    {"court",            "adalot" },
    {"cover",            "daka deya" },
    {"cowboy",            "rakhal" },
    {"creative",            "srijonkor" },
    {"cricket",            "cricket" },
    {"crime",            "oporadh" },
    {"crisis",            "songkot" },
    {"critical",            "songkot" },
    {"cross",            "parkora" },
    {"crowd",            "vir" },
    {"cruel",            "nisthur" },
    {"crush",            "nispasion" },
    {"cry",            "kada" },
    {"currently",            "akon" },
    {"customize",            "saw-nirbacon" },
    {"cut",            "ketafela" },
    {"dad",            "baba" },
    {"daily",            "protidin" },
    {"damage",            "khoti" },
    {"dance",            "nritto" },
    {"dangerous",            "bipodjonok" },
    {"danger",            "bipod" },
    {"dark",            "kalo" },
    {"darling",            "priyotom" },
    {"data",            "tottho" },
    {"database",            "database" },
    {"date",            "tarik" },
    {"daughter",            "konna" },
    {"dawn",            "nicha" },
    {"daylight",            "diner-alo" },
    {"dead",            "mrito" },
    {"deadly",            "maratok" },
    {"dean",            "dean" },
    {"dear",            "priyo" },
    {"debate",            "bitorko" },
    {"decade",            "dosok" },
    {"deception",            "proboncona" },
    {"decide",            "nirdharon kora" },
    {"decimal",            "dosomik" },
    {"declare",            "ghosona" },
    {"deer",            "horin" },
    {"default",            "savabik obostay babohito" },
    {"defeat",            "porajito" },
    {"defect",            "khut" },
    {"defence",            "proti-rokka" },
    {"define",            "songaeito" },
    {"delicate",            "susadu" },
    {"deliver",            "bili kora" },
    {"demend",            "dabi kora" },
    {"depend",            "nirvor-kora" },
    {"depression",            "hotasha" },
    {"deputy",            "sohokary" },
    {"describe",            "bornona kora" },
    {"design",            "noksha" },
    {"destroy",            "dongsho" },
    {"details",            "bistarito" },
    {"detective",            "goyonda" },
    {"determine",            "nirdharon" },
    {"devlop",            "bikashito-kora" },
    {"device",            "jontro" },
    {"diagnostic",            "rog-nirnoy" },
    {"dialogue",            "kothopokthon" },
    {"diamond",            "hirok" },
    {"dairy",            "dinlipi" },
    {"dictionary",            "ovidhan" },
    {"difficult ",            "kothin" },
    {"dinner",            "rater khabar" },
    {"diplomat",            "kutnoitik" },
    {"directory",            "directory" },
    {"disagreement",            "ono-ikko" },
    {"disappointment",            "hotasha" },
    {"disaster",            "biporjoy" },
    {"dicount",            "sar" },
    {"discovery",            "abiskar" },
    {"discussion",            "alochona" },
    {"disdain",            "grihna" },
    {"display",            "prodorshon" },
    {"distance",            "durotto" },
    {"districts",            "zella" },
    {"doll",            "putul" },
    {"donate",            "dan" },
    {"donkey",            "gadha" },
    {"donor",         "data" },
    {"door",         "dorja" },
    {"download",         "download" },
    {"dozen",         "dozen" },
    {"dynamic",         "gotishill" },
    {"dweller",         "basibdha" },
    {"each",         "prothak" },
    {"ear",         "kan" },
    {"early",         "ager" },
    {"earn",         "kamano" },
    {"earth",         "prithibi" },
    {"earthly",         "sangsarik" },
    {"earthquake",         "bhumi-comppo" },
    {"easy",         "sohoz" },
    {"eat",         "khaoya" },
    {"economics",         "orthoniti" },
    {"ecosystem",         "eco-system" },
    {"edit",         "sompadona" },
    {"education",         "shikka" },
    {"effect",         "provab" },
    {"efficient",         "kusoli" },
    {"either",         "hoy" },
    {"eject",         "ber kora deya" },
    {"elapsed",         "otibahito kora" },
    {"election",         "nirbachon" },
    {"electric",         "biddutic" },
    {"elephant",         "hati" },
    {"eligibility",         "joggatta" },
    {"else",         "onnothay" },
    {"embassy",         "dutabus" },
    {"emergency",         "joruri obosta" },
    {"employee",         "kormochari" },
    {"empty",         "khali" },
    {"enable",         "sokkom" },
    {"enact",         "aiya pori noto kora" },
    {"encounter",         "somukkhin haoya" },
    {"encourage",         "utsahito kora" },
    {"end",         "ses" },
    {"enemy",         "sotru" },
    {"energy",         "sokti" },
    {"engineer",         "prokoushoili" },
    {"enhance",         "briddhi" },
    {"enjoy",         "upovog" },
    {"enough",         "porjapto" },
    {"ensure",         "nicctt koron" },
    {"enter",         "probesh" },
    {"entertaiment",         "anondo" },
    {"enthusiastic",         "kormotho" },
    {"epic",         "jug" },
    {"episode",         "porbo" },
    {"equal",         "soman" },
    {"equations",         "somikoron" },
    {"era",         "jug" },
    {"erase",         "musha fela" },
    {"error",         "vul" },
    {"especially",         "bishesvaba" },
    {"eassy",         "rocona" },
    {"essential",         "abossik" },
    {"established",         "protistito" },
    {"evaluation",         "mullayon" },
    {"event",         "ghotona" },
    {"ever",         "sorboda" },
    {"everybody",         "prothakjon" },
    {"everythig",         "sobkichu" },
    {"evidence",         "proman" },
    {"evil",         "sotru" },
    {"exact",         "shotik" },
    {"exam",         "porikha" },
    {"excellent",         "sorboskristo" },
    {"exception",         "batikrom" },
    {"excess",         "otirikto" },
    {"exclusive",         "saw-tantro" },
    {"execution",         "karjokor" },
    {"exercise",         "onusilon" },
    {"exit",         "prostan" },
    {"except",         "asakora" },
    {"expensive",         "dami" },
    {"experiance",         "ovigota" },
    {"experiment",            "porikha" },
    {"expert",            "dokko" },
    {"export",            "roptani kora" },
    {"extension",            "bordhitangso" },
    {"external",            "bahir" },
    {"extract",            "niskasion kora" },
    {"extraordinary",            "osadharon" },
    {"eye",            "chock" },
    {"eyeball",            "okki-golok" },
    {"fabric",            "kapor" },
    {"face",            "muk" },
    {"facility",            "subudha" },
    {"fact",            "karon" },
    {"factory",            "karkhana" },
    {"fail",            "bartho haoya" },
    {"faithful",            "bissasi" },
    {"fake",            "nokol" },
    {"fall",            "poton" },
    {"fame",            "sunam" },
    {"familiar",            "porichito" },
    {"famine",            "akal" },
    {"famous",            "bikkatto" },
    {"fan",            "volto/pakha" },
    {"fancy",            "ovinobo" },
    {"farewell",            "bidoy somvason" },
    {"farmer",            "krishok" },
    {"fast",            "druto" },
    {"fatal",            "marattok" },
    {"fault",            "dos" },
    {"favor",            "prosroy" },
    {"favorite",            "priyo" },
    {"feature",            "boisisto" },
    {"feedback",            "montobbo" },
    {"feet",            "foot" },
    {"famale",            "mohila" },
    {"fertiliser",            "sar" },
    {"festival",            "utsob" },
    {"fever",            "jor" },
    {"few",            "kichu" },
    {"fiber",            "tontu" },
    {"fiction",            "banoyat" },
    {"field",            "khettro" },
    {"file",            "nothi" },
    {"fill",            "vorat" },
    {"film",            "cholo-citro" },
    {"final",            "churanto" },
    {"finance",            "rajosso" },
    {"find",            "khoja" },
    {"finger",            "angul" },
    {"finish",            "ses" },
    {"fire",            "agun" },
    {"firms",            "firms" },
    {"fish",            "mus" },
    {"fit",            "khap-khayo" },
    {"fixed",            "oporibortonio" },
    {"flag",            "potaka" },
    {"flight",            "urono" },
    {"float",            "vasa" },
    {"flood",            "bonna" },
    {"flower",            "ful" },
    {"flute",            "bashi" },
    {"focus",            "kendro-bindu" },
    {"follow",            "onusoron" },
    {"food",            "khaddo" },
    {"fool",            "boka" },
    {"for",            "jonno" },
    {"forbidden",            "nished" },
    {"forecast",            "purbavas" },
    {"forest",            "jongol" },
    {"forget",            "vulajaoya" },
    {"formal",            "anustanik" },
    {"former",            "prakton" },
    {"founder",            "protistatha" },
    {"from",            "hota" },
    {"front",            "sodor" },
    {"full",            "sompurno" },
    {"fun",            "moja" },
    {"gain",            "luv kora" },
    {"game",            "khela" },
    {"gang",           "dol" },
    {"gangster",            "gunda" },
    {"gap",            "faka" },
    {"garbage",            "jonjal" },
    {"garden",            "bagan" },
    {"garment",            "posak" },
    {"gas",            "gas" },
    {"gate",            "dorja" },
    {"gay",            "somokami" },
    {"general",            "sadharon" },
    {"generate",            "utpadon kora" },
    {"genious",            "protivaban" },
    {"genocide",            "gonohatta" },
    {"geography",            "vugol" },
    {"geology",            "vu-tto" },
    {"get",            "paoya" },
    {"ghost",            "vut" },
    {"give",            "deoya" },
    {"glad",            "anondito" },
    {"glass",            "kach" },
    {"global",            "sarbik" },
    {"go",            "jaoya" },
    {"goddess",            "debi" },
    {"gold",            "sona" },
    {"good",            "vlo" },
    {"gossip",            "golpo" },
    {"goverment",            "sorkar" },
    {"grab",            "dhora" },
    {"grade",            "stor" },
    {"gradual",            "dhera dhera" },
    {"gradute",            "snatok" },
    {"grammer",            "bakoron" },
    {"grass",            "gash" },
    {"grave",            "kobor" },
    {"gravity",            "mohakorso" },
    {"great",            "mohan" },
    {"greedy",            "lovi" },
    {"green",            "sobuj" },
    {"greeting",            "obvorthona" },
    {"ground",            "vumi/math" },
    {"grow",            "briddhi kora" },
    {"guardian",            "ovibhabok" },
    {"guess",            "onuman" },
    {"guest",            "othithi" },
    {"guilty",            "dosi" },
    {"habit",            "ovvash" },
    {"hair",            "chul" },
    {"half",            "ordhek" },
    {"hall",            "hall-ghor" },
    {"hallow",            "ovibadon" },
    {"handbook",            "guideboi" },
    {"hand",            "hath" },
    {"handshake",            "hath-melono" },
    {"handsome",            "sudorson" },
    {"handy",            "kajer" },
    {"happy",            "suki" },
    {"hard",            "sokto" },
    {"harvest",            "fosol folono" },
    {"has",            "asa" },
    {"hat",            "tupi" },
    {"hawker",            "feriwala" },
    {"head",            "prodhan" },
    {"healer",            "arogoo" },
    {"healthcare",            "sasto-seba" },
    {"heat",            "tap-deya" },
    {"heaven",            "sorgo" },
    {"heavy",            "vari" },
    {"height",            "uccota" },
    {"held",            "onustito" },
    {"helio",            "souro" },
    {"hell",            "norok" },
    {"helper",            "sohayotakari" },
    {"helpful",            "sohayok" },
    {"hency",            "tai" },
    {"here",            "akana" },
    {"heroic",            "birochito" },
    {"hey",            "oha" },
    {"hi",            "oha/hi" },
    {"hide",            "lukano" },
    {"high",            "ucco" },
    {"highway",            "mohasorok" },
    {"hilsa",            "elish" },
    {"hinduism",            "hindu-dhormo" },
    {"hint",            "avas" },
    {"history",            "etihas" },
    {"hit",            "agat" },
    {"hole",            "gorto" },
    {"hoolder",            "dharok" },
    {"holiday",            "chutir din" },
    {"holy",            "pobitro" },
    {"home",            "bari" },
    {"honest",            "sot" },
    {"honey",            "modhu" },
    {"honor",            "somman" },
    {"hope",            "asa" },
    {"horizontal",            "anubhumik" },
    {"horse",            "ghora" },
    {"hospital",            "hasspatal" },
    {"host",            "amontrok" },
    {"hot",            "gorom" },
    {"house",            "ghor" },
    {"housewife",            "grihobodhu" },
    {"how",            "kivaba" },
    {"human",            "manus" },
    {"humble",            "binito" },
    {"humidity",            "auddrota" },
    {"husband",            "sami" },
    {"hybrid",            "songkor" },
    {"hypothetical",            "kalponik" },
    {"ice",            "borof" },
    {"icon",            "protik" },
    {"idea",            "dharona" },
    {"identification",            "porichoy" },
    {"ignore",            "uppekha kora" },
    {"illegal",            "oboidho" },
    {"illustration",            "alongkoron" },
    {"image",            "sobi" },
    {"imagine",            "kolpona" },
    {"immediate",            "obilomba" },
    {"immigrant",            "ovibasi" },
    {"impact",            "dhakka deya" },
    {"implementation",            "proyog" },
    {"implicit",            "porokkho" },
    {"importance",            "gurttopurno" },
    {"impossible",            "osombhob" },
    {"impress",            "rekhapat kora" },
    {"improve",            "unnoti kora" },
    {"inaccurate",            "ba-thik" },
    {"inactive",            "niskrio" },
    {"inbox",            "inbox" },
    {"incapable",            "okkhom" },
    {"incident",            "ghatona" },
    {"include",            "ontorvukto" },
    {"incoherent",            "khapsara" },
    {"income",            "ay" },
    {"incomplete",            "osompurno" },
    {"inconsistent",            "khap-sara" },
    {"incorrect",            "ba-thik" },
    {"increase",            "briddhi" },
    {"indeed",            "bastobik-pokka" },
    {"indefinite",            "onidristo" },
    {"independence",            "sadhineta" },
    {"index",            "sucipotro" },
    {"indicate",            "nirdes deya" },
    {"individual",            "baktigoto" },
    {"industrial",            "srom-silposongkaranto" },
    {"infant",            "shishu" },
    {"infinite",            "osim" },
    {"influence",            "provab" },
    {"inform",            "jana" },
    {"information",            "tattho" },
    {"infrastructure",            "porikathamo" },
    {"inhabit",            "bosobaskora" },
    {"initial",            "prathomic" },
    {"initiative",            "proborton" },
    {"injury",            "agat" },
    {"injustice",            "obichar" },
    {"ink",            "kali" },
    {"inner",            "obvontorin" },
    {"innocent",            "nispap" },
    {"innovation",            "udvabon" },
    {"insect",            "potongo" },
    {"insecure",            "niraportahin" },
    {"inserted",            "sonnibesito" },
    {"inside",            "vetora" },
    {"insist",            "pira pire kora" },
    {"inspire",            "onupranito kora" },
    {"instant",            "tatkhonik" },
    {"instead",            "poriborta" },
    {"institution",            "protistan" },
    {"instruct",            "nirdes deya" },
    {"insufficient",            "oporjapto" },
    {"insult",            "opoman" },
    {"integer",            "purno-songkha" },
    {"integration",            "akotrarrikoron" },
    {"intellectual",            "buddijibi" },
    {"integrity",            "suddota" },
    {"intelligence",            "medha" },
    {"intensive",            "progar" },
    {"inter",            "anto" },
    {"interest",            "yecca" },
    {"interior",            "obvontorin" },
    {"intermediate",            "maddomik" },
    {"international",            "antrojatik" },
    {"interpret",            "bakka-kora" },
    {"interruption",            "maj potha bada deya" },
    {"interval",            "biroti" },
    {"interview",            "sakkat-khar" },
    {"introduce",            "upostapon" },
    {"invention",            "udvabona" },
    {"inverse",            "biporid" },
    {"investigation",            "todonto" },
    {"invest",            "biniyog" },
    {"investigator",            "todontokari" },
    {"invisible",            "gayeb" },
    {"invite",            "amontron" },
    {"involve",            "jorono" },
    {"irregular",            "oniyomito" },
    {"isolated",            "biccinno" },
    {"item",            "bostu" },
    {"jagged",            "osomotol bhumi" },
    {"jail",            "garod" },
    {"jealous",            "hingsakator" },
    {"jestfulness",            "porihas-priota" },
    {"jeweler",            "johuri" },
    {"job",            "kaj" },
    {"jocular",            "rosik" },
    {"joint",            "joutho" },
    {"joke",            "koutok" },
    {"journalism",            "sangbadikota" },
    {"jovial",            "amuda" },
    {"joyful",            "anondomoy" },
    {"judge",            "bicharok" },
    {"judgement",            "bichar" },
    {"judiciary",            "bicharbivag" },
    {"juice",            "ros" },
    {"jump",            "lafano" },
    {"justification",            "jothsjotho" },
    {"just",            "sudhu" },
    {"jute",            "pat" },
    {"keep",            "rakha" },
    {"key",            "chabi" },
    {"keyboard",            "keyboard" },
    {"keyword",            "mul-sobdo" },
    {"kick",            "lathi mara" },
    {"kill",            "hotta-kora" },
    {"kind",            "doyalu" },
    {"kinetic",            "goti" },
    {"king",            "raja" },
    {"kingdom",            "rajjo" },
    {"kitchen",            "ranna ghor" },
    {"knee",            "hatu" },
    {"knights",            "joddha" },
    {"know",            "jana" },
    {"knowledge",            "gayan" },
    {"labor",            "srom" },
    {"lack",            "ovab" },
    {"lad",            "kishor" },
    {"lady",            "potni" },
    {"lakh",            "lakh" },
    {"lamp",            "prodip" },
    {"land",            "bhumi" },
    {"landless",            "bhumihin" },
    {"landmark",            "pothnirdeshok chinno" },
    {"language",            "vasha" },
    {"large",            "boro" },
    {"late",            "ses" },
    {"laugh",            "porihas kora" },
    {"laughter",            "hasi" },
    {"launch",            "chalu kora" },
    {"law",            "ain" },
    {"lawyer",            "aingibi" },
    {"layer",            "stor" },
    {"layout",            "noksha" },
    {"lazy",            "olos" },
    {"lead",            "nettrito" },
    {"leaf",            "pata" },
    {"league",            "league" },
    {"least",            "sobcheya-kom" },
    {"leave",            "bad deya" },
    {"left",            "bam" },
    {"legacy",            "uttoradhikar sutra prapto somporti" },
    {"legend",            "monishi" },
    {"length",            "durgho" },
    {"less",            "kom" },
    {"lesson",            "pat" },
    {"level",            "dhap" },
    {"liability",            "baddho-badhokota" },
    {"liberty",            "sadhonota" },
    {"libary",            "sadhinota" },
    {"license",            "license deya" },
    {"life",            "jibon" },
    {"life-cycle",            "jibon-chokro" },
    {"like",            "posondo" },
    {"limited",            "simiboddo" },
    {"link",            "songjog" },
    {"lion",            "singho" },
    {"list",            "talika" },
    {"listen",            "sona" },
    {"load",            "load kora" },
    {"loan",            "dhar deya" },
    {"local",            "stanio" },
    {"lock",            "tala bondho kora" },
    {"log",            "lipibondho-koron" },
    {"logic",            "jukti" },
    {"logo",            "protik" },
    {"lonely",            "akaki" },
    {"long",            "lomba" },
    {"look",            "dekha" },
    {"loop",            "chokkrokar" },
    {"lost",            "harano" },
    {"love",            "valobasha" },
    {"low",            "nimno" },
    {"luck",            "vaggo" },
    {"lunch",            "moddhovoj" },
    {"luxurious",            "bilasbohul" },
    {"lyrics",            "ganer-kotha" },
    {"mad",            "pagol" },
    {"made",            "prostut" },
    {"megazine",            "anondo pot-trika" },
    {"magic",            "jadu" },
    {"magnet",            "chumbok" },
    {"main",            "prodhan" },
    {"maintenance",            "rokkhonabekkan" },
    {"major",            "prodhan" },
    {"maker",            "proustotkarok" },
    {"male",            "purus" },
    {"mall",            "biponi bitan" },
    {"man",            "manus" },
    {"manage",            "gosano" },
    {"manager",            "babostapok" },
    {"mandatory",            "abos-sik" },
    {"mango",            "am" },
    {"manipulate",            "nipun vaba babaohar kora" },
    {"mankind",            "manob-jati" },
    {"manner",            "podhoti" },
    {"manual",            "saw-nirbachito" },
    {"manufacture",            "utpadon-kora" },
    {"map",            "man-chittro" },
    {"market",            "bazar" },
    {"marketing",            "biponon" },
    {"marks",            "chinno" },
    {"marriage",            "bibaho" },
    {"mass",            "vor" },
    {"master",            "probhu" },
    {"math",            "onko" },
    {"matter",            "bishoy" },
    {"max",            "sorbocco" },
    {"may",            "hoyto" },
    {"mayor",            "mayor" },
    {"me",            "ami" },
    {"mean",            "nich" },
    {"meaning",            "ortho" },
    {"measure",            "porimap kora" },
    {"meat",            "mangso" },
    {"medal",            "podok" },
    {"medical",            "chikissa-sastogoto" },
    {"medium",            "maddom" },
    {"melody",            "sutano" },
    {"melt",            "golano" },
    {"member",            "sodoso" },
    {"memo",            "rosid" },
    {"memorial",            "sriti-chinno" },
    {"memory",            "sriti" },
    {"men",            "manus" },
    {"mental",            "manosik" },
    {"mention",            "ullako-kora" },
    {"menu",            "menu" },
    {"mercury",            "parod" },
    {"merely",            "nisok" },
    {"merit",            "medha" },
    {"message",            "barta" },
    {"metabolic",            "bipakiyo" },
    {"metal",            "dhatu" },
    {"method",            "podhoti" },
    {"metre",            "metre" },
    {"mice",            "ydur" },
    {"mid",            "majha-majhi" },
    {"midwife",            "dhat-tri" },
    {"mild",            "" },
    {"million",            "dos lokko" },
    {"military",            "samorik" },
    {"milk",            "dud" },
    {"mine",            "amar" },
    {"minimum",            "sorbonimno" },
    {"maximum",            "sorbocco" },
    {"minister",            "montri" },
    {"mirror",            "glass" },
    {"miss",            "kumari" },
    {"mistake",            "vul" },
    {"misunderstand",            "vul bojha" },
    {"mix",            "misro" },
    {"mobile",            "mobile/choloman" },
    {"model",            "nomuna" },
    {"mom",            "ma" },
    {"money",            "tk" },
    {"monsoon",            "mousumi" },
    {"moon",            "chad" },
    {"mountain",            "pahar" },
    {"most",            "basirvag" },
    {"movie",            "cinema" },
    {"music",            "gaan" },
    {"mutual",            "parosparik" },
    {"myself",            "soyong ami" },
    {"nail",            "nokh" },
    {"name",            "nam" },
    {"napkin",            "gamsa" },
    {"narrow",            "soru" },
    {"nation",            "jati" },
    {"national",            "jatio" },
    {"native",            "stanio" },
    {"nature",            "sovab" },
    {"naval",            "nou" },
    {"near",            "kacha" },
    {"necessary",            "proyojonio" },
    {"need",            "proyojo" },
    {"negative",            "nabodhok" },
    {"negotiate",            "aposa tik kora" },
    {"neighbour",            "protibesi" },
    {"nephew",            "vagna" },
    {"nest",            "jal" },
    {"network",            "network" },
    {"neutral",            "niropekko" },
    {"never",            "khakhono na" },
    {"new",            "notun" },
    {"news",            "khabor" },
    {"next",            "poroborty" },
    {"nick",            "dakname" },
    {"nipple",            "ston-brinto" },
    {"noble",            "sommanio puroskar" },
    {"nobody",            "kew na" },
    {"noise",            "kolahol" },
    {"nonstop",            "akadhara" },
    {"noon",            "modhano" },
    {"nose",            "nak" },
    {"notable",            "lokkonio" },
    {"notepad",            "khata" },
    {"notice",            "bigopti" },
    {"now",            "akon" },
    {"nuclear",            "paromonobik" },
    {"null",            "zero" },
    {"numeric",            "songkha" },
    {"nurse",            "sebika" },
    {"nut",            "badam" },
    {"oasis",            "morudan" },
    {"obedience",            "baddota" },
    {"object",            "uddesho" },
    {"objection",            "apotti" },
    {"observe",            "porjobekkon" },
    {"obstacle",            "badha" },
    {"obvious",            "bodhgommo" },
    {"occasion",            "upolokko" },
    {"occupation",            "pesha" },
    {"occur",            "ghota" },
    {"ocean",            "somudro" },
    {"offer",            "prostab" },
    {"office",            "doptor" },
    {"officer",            "adhikarik" },
    {"often",            "proyosoi" },
    {"oh",            "oh" },
    {"oil",            "tel" },
    {"oilseeds",            "toilbej" },
    {"old",            "purono" },
    {"olive",            "jolpai" },
    {"on",            "chalu" },
    {"once",            "akbar" },
    {"open",            "khola" },
    {"opinion",            "motamot" },
    {"opportunities",            "sombhobona gulo" },
    {"opposition",            "biporid pokko" },
    {"optics",            "alokbidda" },
    {"optional",            "oyichick bishoy" },
    {"oral",            "moukhik" },
    {"order",            "ades" },
    {"organization",            "songosta" },
    {"ordinary",            "sadharon" },
    {"organize",            "ayojon" },
    {"origin",            "utpotti" },
    {"orphan",            "onath" },
    {"oscillation",            "dolon" },
    {"outline",            "ruprekha" },
    {"outside",            "bahira" },
    {"oven",            "chulli" },
    {"owe",            "rini thaka" },
    {"own",            "nijer" },
    {"owl",            "pecha" },
    {"owner",            "malik" },
    {"pack",            "gosano" },
    {"paddle",            "boitha" },
    {"page",            "pata" },
    {"paint",            "rongkora" },
    {"pair",            "jora" },
    {"palace",            "emirot" },
    {"paper",            "kagoj" },
    {"paragraph",            "onussed" },
    {"parcel",            "parcel" },
    {"park",            "park" },
    {"parliament",            "bidhan-sovha" },
    {"part",            "ongso" },
    {"partial",            "angsik" },
    {"participant",            "onsogrohonkari" },
    {"particle",            "kona" },
    {"partner",            "songi" },
    {"party",            "dol" },
    {"pass",            "pass kora" },
    {"passage",            "prostan" },
    {"passion",            "govhir onurag" },
    {"patch",            "pach kora" },
    {"paternal",            "poirtik" },
    {"patience",            "dhorjo" },
    {"pattern",            "noksha" },
    {"pause",            "thama" },
    {"pay",            "dey" },
    {"payment",            "orthoprodan" },
    {"peace",            "santi" },
    {"peacock",            "moyur" },
    {"peanut",            "badam" },
    {"pearl",            "mukta" },
    {"pen",            "kolom" },
    {"penalty",            "sasti" },
    {"pencil",            "katpencil" },
    {"penicillin",            "penicillin" },
    {"penis",            "linkgo" },
    {"peon",            "dak-horkora" },
    {"percent",            "sotangso" },
    {"perfect",            "shotik" },
    {"performance",            "karjokarita" },
    {"perfume",            "ator" },
    {"period",            "porjaykal" },
    {"parmanent",            "stayi" },
    {"permit",            "onumodon" },
    {"persian",            "fersi" },
    {"personal",            "baktigoto" },
    {"philosopher",            "darsonik" },
    {"photo",            "sobi" },
    {"palace",            "imarot" },
    {"palm",            "cheto" },
    {"panic",            "atongko" },
    {"paragraph",            "onushed" },
    {"parallel",            "somantoral" },
    {"part",            "ongso" },
    {"password",            "gupto-chabi" },
    {"pea",            "motor" },
    {"perfect",            "shotik" },
    {"picture",            "chobi" },
    {"pilgrim",            "tirtho-jatri" },
    {"placement",            "stapona" },
    {"plan",            "porikolpona" },
    {"play",            "khela" },
    {"please",            "doyakora" },
    {"pleasant",            "anondomoy" },
    {"poet",            "kobi" },
    {"poetry",            "kobita" },
    {"political",            "rajnoitik" },
    {"poor",            "gorib" },
    {"popular",            "jonopriyo" },
    {"possibility",            "sombavhona" },
    {"power",            "sokti" },
    {"practice",            "onusilon" },
    {"precise",            "jothajoto" },
    {"prediction",            "vobissotbani" },
    {"preliminary",            "prathomic" },
    {"present",            "bortoman" },
    {"president",            "rastopoti" },
    {"price",            "mulloban" },
    {"primary",            "prathomik" },
    {"principal",            "oddako" },
    {"print",            "capa" },
    {"prior",            "purba" },
    {"priority",            "okgrogonno" },
    {"private",            "baktigoto" },
    {"process",            "poddhoti" },
    {"product",            "drobbo" },
    {"production",            "utpadon" },
    {"program",            "onustan" },
    {"progression",            "progoti" },
    {"project",            "prokolpo" },
    {"promotion",            "unnoti" },
    {"property",            "boisisto" },
    {"proposal",            "prostab" },
    {"proud",            "gorbo" },
    {"publication",            "prokash" },
    {"public",            "jonogon" },
    {"pure",            "suddo" },
    {"push",            "thela" },
    {"profession",            "pesha" },
    {"profile",            "brittanto" },
    {"qualification",            "joggota" },
    {"quality",            "man" },
    {"quarrel",            "jogra" },
    {"queen",            "rani" },
    {"query",            "onusondhan" },
    {"question",            "prostab" },
    {"queue",            "sari" },
    {"quick",            "druto" },
    {"quit",            "prostan" },
    {"quota",            "quota" },
    {"quote",            "uddotokora" },
    {"quran",            "quran" },
    {"questionnaire",            "prosnomala" },
    {"quantity",            "poriman" },
    {"quadrant",            "choturtangso" },
    {"quality",            "man" },
    {"rabbit",            "khorgos" },
    {"race",            "protijogita" },
    {"radio",            "akashbani" },
    {"rainbow",            "rongdhonu" },
    {"rainfall",            "bristipat" },
    {"random",            "alomelo" },
    {"rank",            "stor" },
    {"ratio",            "onupat" },
    {"react",            "protikriya" },
    {"ready",            "toiri" },
    {"real",            "bortoman" },
    {"receive",            "grohon kora" },
    {"recently",            "samprotik" },
    {"recognise",            "upolobdhi" },
    {"recommend",            "poramorso" },
    {"reconnect",            "punray songjog" },
    {"recruit",            "niyog-kora" },
    {"red",            "lal" },
    {"reference",            "tattosutro" },
    {"reflection",            "protifolon" },
    {"refresh",            "jalaano" },
    {"refuse",            "osikar" },
    {"region",            "onchol" },
    {"register",            "nibondon" },
    {"reject",            "batil-kora" },
    {"relation",            "somporko" },
    {"relative",            "tulonay" },
    {"release",            "mukti deya" },
    {"religion",            "dhormo" },
    {"remember",            "soron kora" },
    {"renamable",            "namantor-joggo" },
    {"repair",            "meramot" },
    {"replace",            "bodol" },
    {"reply",            "uttor deya" },
    {"representative",            "protinidhi" },
    {"republic",            "projatontro" },
    {"reset",            "purbabostay ferao" },
    {"responsibility",            "dayoito" },
    {"result",            "folafol" },
    {"return",            "fira asa" },
    {"revenue",            "rajosso" },
    {"rich",            "dhoni" },
    {"risk",            "jhuki" },
    {"rule",            "sason kora" },
    {"rural",            "gramin" },
    {"ruin",            "dhongsow" },
    {"route",            "poth" },
    {"sack",            "bor-khasto kora" },
    {"sad",            "dukko" },
    {"safe",            "nirapod" },
    {"sail",            "hat" },
    {"salary",            "beton" },
    {"salt",            "lobon" },
    {"salvation",            "uddar" },
    {"same",            "akoi" },
    {"sample",            "nomuna" },
    {"sand",            "bali" },
    {"satellite",            "upogroho" },
    {"satisfy",            "sontusto" },
    {"scan",            "scan kora" },
    {"scene",            "drisso" },
    {"scholarship",            "britti" },
    {"scope",            "bapti" },
    {"scream",            "cecano" },
    {"script",            "lipi" },
    {"sea",            "sagor" },
    {"search",            "onusondhan kora" },
    {"season",            "hritue" },
    {"secondary",            "gouno" },
    {"secret",            "gopon" },
    {"seen",            "dekha" },
    {"send",            "patha" },
    {"seoul",            "seoul" },
    {"separation",            "bivajon" },
    {"sericulture",            "resom cas" },
    {"servant",            "chakor" },
    {"shadow",            "saya" },
    {"ship",            "jahaj" },
    {"shop",            "dokan" },
    {"sport",            "khela" },
    {"spoon",            "chamos" },
    {"table",            "table" },
    {"tablet",            "bori" },
    {"tail",            "lage" },
    {"talent",            "protiva" },
    {"talk",            "kotha" },
    {"tank",            "tank" },
    {"task",            "kaj" },
    {"tax",            "kor" },
    {"taxi",            "taxi" },
    {"tea",            "cha" },
    {"teacher",            "shikkok" },
    {"technology",            "projucti" },
    {"telephone",            "telephone" },
    {"television",            "durbikkhon jontro" },
    {"tell",            "bola" },
    {"temperature",            "tapmatra" },
    {"tenant",            "varatia" },
    {"tender",            "dorpotro" },
    {"tense",            "kal" },
    {"term",            "sobdo" },
    {"terrorism",            "sontrasbad" },
    {"test",            "porikha-kora" },
    {"text",            "lekha" },
    {"thanks",            "donnobad" },
    {"theater",            "theater" },
    {"thesis",            "gobashona" },
    {"thief",            "chor" },
    {"ticket",            "ticket" },
    {"time",            "somoy" },
    {"today",            "aj" },
    {"transformation",            "rupantor" },
    {"translation",            "onubad" },
    {"umbrella",            "sata" },
    {"unavailable",            "pao jassa na" },
    {"uncle",            "cha-cha" },
    {"under",            "nicha" },
    {"unfit",            "okkom" },
    {"universal",            "sarbojonin" },
    {"unless",            "jodi na" },
    {"unpublished",            "o-prokashito" },
    {"unsuccessful",            "o-sofol" },
    {"unused",            "o-babohito" },
    {"up",            "upora" },
    {"update",            "samprotik-koron" },
    {"urgent",            "joruri" },
    {"usability",            "baboharjoggota" },
    {"use",            "babohar" },
    {"usallay",            "sadharonoto" },
    {"vacation",            "chuti" },
    {"vain",            "brithi" },
    {"valid",            "sotik" },
    {"vocabulary",            "sobdo-kos" },
    {"vocal",            "kontho" },
    {"volt",            "volt" },
    {"voluntary",            "sessasebi" },
    {"vowel",            "sorborno" },
    {"wait",            "opekha-kora" },
    {"waiver",            "sotto-tag" },
    {"walk",            "hata" },
    {"want",            "chaoyo" },
    {"war",            "juddo" },
    {"warm",            "usno" },
    {"watch",            "porjo-bekkon kora" },
    {"water",            "pani" },
    {"way",            "poth" },
    {"we",            "amra" },
    {"weak",            "durbol" },
    {"weapon",            "ostro" },
    {"web",            "web" },
    {"wedding",            "bibaho" },
    {"welcome",            "sagotom" },
    {"west",            "poccim" },
    {"whole",            "somogro" },
    {"wife",            "stri" },
    {"window",            "janala" },
    {"winter",            "sitkal" },
    {"wire",            "tar" },
    {"women",            "mohila" },
    {"wonderfully",            "chomotkar" },
    {"work",            "kaj" },
    {"wow",            "chamotkar" },
    {"write",            "lekha" },
    {"xenon",            "gas bishes" },
    {"xylophone",            "baddojontro-bishes" },
    {"yard",            "ak-goge" },
    {"yea",            "ha" },
    {"year",            "bosor" },
    {"yellow",            "holud" },
    {"yes",            "ha" },
    {"yet",            "akono" },
    {"young",            "jubok" },
    {"zoology",            "prani-bidda" },
    {"zoo",            "chiriya khana" },
    {"zoom",            "boro kora deka" },
    {"zone",            "onchol" },
    {"enddictionary",    " "}
};//end word store


int main()
{
    system("color a");
    printf("\t\t=========================================\n");
    printf("\t\t=     Welcome To E2b Mini Dictionary    =\n");
    printf("\t\t=========================================\n\n\n");


    /*find how much word in dictionary. because when we find a word then
    how much word we find that means it used to for loop condition*/

    int total_word = total_word_count();
    int wrong_choise = 1;
    int slow_show = 500;//change it for slow show.... ///0 for normal


    /*continue dictionary until user don't want to exit*/
    while(1)
    {
        //start menu
        printf("\n\t1.View with meaning");
        printf("\n\t2.Only word view");
        printf("\n\t3.Search");
        printf("\n\t4.Advanced Search");
        printf("\n\t5.Exit");
        //end menu

        //start, collect user choice
        printf("\n\n  Your choice : ");
        int choice = 0;
        scanf("\n\n%d",&choice);
        //end, collect user choice

        switch (choice)
        {
        //view with meaning
        case 1:
            printf("\n\tEnglish word \t Bangla Meaning\n");
            printf("\t---------------------------------\n");

            int b;
            for(b = 0; b < total_word; b++)
            {
                if(strlen(word_store[b].main_word) > 6)
                {
                    printf("\t%s \t %s \n",word_store[b].main_word,word_store[b].word_meaning);
                }
                else
                {
                    printf("\t%s \t\t %s \n",word_store[b].main_word,word_store[b].word_meaning);
                }

                Sleep(slow_show);

            }/*use this loop for print only word from dictionary*/

            printf("\n\nContinue? (y/n) ");

            int case_num  = 1;

            confirm_continue(case_num); /*this is a custom function*/
            break; /*used BREAK , so that we can stop switch case. otherwise continue other case*/



        //view only word and search option
        case 2:
            printf("\n\tEnglish Word\n");
            printf("\t------------\n");
            int c;
            for(c = 0; c < total_word; c++)
            {
                printf("\t%s\n",word_store[c].main_word);

                Sleep(slow_show);
            }

            printf("\nType a word from the list : ");

            int recommen = 0;

            search_dictionary(total_word,recommen);//custom function

            printf("\nSearch another? (y/n) ");

            case_num = 2;
            confirm_continue(case_num);

            break;


        //search any word
        case 3:
            printf("\nType a word : ");

            recommen = 1;

            search_dictionary(total_word,recommen);

            printf("\nSearch another? (y/n) ");

            case_num = 3;
            confirm_continue(case_num);

            break;



        //advanced search
        case 4:
            printf("\ntype 1 for exit\n\n");
            char advanced_word_store[26] = "";
            int advanced_word_store_position = 0;

            char advanced_word ;
            int notMatch = 0;


            while(1)
            {
                printf("\nsearch word %s",advanced_word_store);
                advanced_word = getche();

                if(advanced_word == '\b')
                {
                    advanced_word_store[advanced_word_store_position - 1] = NULL;
                    advanced_word_store_position--;
                }
                else if(advanced_word == '1') //for exit while loop
                {
                    break;//exit(0);
                }
                else
                {
                    advanced_word_store[advanced_word_store_position] = advanced_word;
                    advanced_word_store_position++;
                }

                printf("\n");
                if(advanced_word_store_position > 0)
                {
                    char first_print = 'y';
                    int f;
                    for(f = 1; f < total_word; f++)
                    {
                        if(f % 256 == 0)
                            continue;

                        char *advanced_src = strstr(word_store[f].main_word, advanced_word_store);
                        char advanced_match_position = advanced_src - word_store[f].main_word;

                        if(advanced_match_position == 0)
                        {
                            if(first_print == 'y')
                            {
                                printf("\n\tEnglish word \t Bangla Meaning\n");
                                printf("\t---------------------------------\n");
                                first_print = 'n';
                            }
                            if(strlen(word_store[f].main_word) > 6)
                            {
                                //if(strcmp(strlwr(user_word),word_store[d].main_word) == 0)
                                printf("\t%s \t %s \n",word_store[f].main_word,word_store[f].word_meaning);
                            }
                            else
                            {
                                printf("\t%s \t\t %s \n",word_store[f].main_word,word_store[f].word_meaning);
                            }
                        }
                    }
                    printf("\n\nPress 1 for exit");
                }
                else
                {
                    advanced_word_store_position = 0;
                }

            }


            break;
        case 5:
            printf("Thank you for using my mini dictionary\n\n");
            created_by();
            exit(0);
        default:

            if(wrong_choise == 3)
            {
                printf("Failed to continue! Try next time ..\n");
                printf("\n\n\nThank you for using our mini dictionary\n\n");
                created_by();
                exit(0);
            }
            else
            {
                printf("Wrong input! Please try again ");
                wrong_choise++;
            }

            break;
        }
    }



    return 0;
}



int total_word_count()
{
    //start total word found
    int a;
    int total_word = 0;

    for(a = 0; ; a++)
    {
        if(strcmp("enddictionary",word_store[a].main_word) == 0)
        {
            break;
        }
        total_word++;
    }//end total word found

    return total_word;
}




void confirm_continue(case_num)
{
    int wrong_input = 1;

    while(1)
    {

        char confirm = getche();

        if(confirm == 'n' || confirm == 'N')
        {
            //printf("\n\nThanks for using our mini dictionary\n\n");
            break;
        }
        else if(confirm == 'y' || confirm == 'Y')
        {
            printf("\n");
            if(case_num == 1)
            {
                break;
            }
            else if(case_num == 2)
            {
                printf("\nType a word : ");
                search_dictionary(total_word_count());
                printf("\n\Search another? (y/n) ");
            }
            else if(case_num == 3)
            {
                printf("\nType a word : ");
                int recommen = 1;
                search_dictionary(total_word_count(),recommen);
                printf("\n\Search another? (y/n) ");
            }
        }
        else
        {
            if(wrong_input == 3)
            {
                printf("\nYou give more wrong input!\n");
                created_by();
                exit(0);
            }
            else
            {
                printf("\nWrong input! Try again ");
                wrong_input++;
            }
        }
    }
}


void search_dictionary(total_word,recommen)
{
    char user_word[50];
    char recommended[2] ;
    scanf("%s",user_word);

    int match_word;
    int d;
    for(d = 0; d < total_word; d++)
    {
        if(strcmp(strlwr(user_word),word_store[d].main_word) == 0)
        {
            printf("\n\tEnglish word \t Bangla Meaning\n");
            printf("\t---------------------------------\n");
            if(strlen(word_store[d].main_word) > 6)
            {
                printf("\t%s \t %s \n",word_store[d].main_word,word_store[d].word_meaning);
            }
            else
            {
                printf("\t%s \t\t %s \n",word_store[d].main_word,word_store[d].word_meaning);
            }

            match_word = d;
            break;
        }
        else if(d == total_word-1)
        {
            printf("\n\t*Do not match* \n");
        }
    }

    if(recommen == 1)
    {

        recommended[0] = user_word[0];
        recommended[1] = user_word[1];
        recommended[2] = user_word[2];;
        recommended[3] = NULL;

        char first_print = 'y';
        int e;
        for(e = 1; e < total_word; e++)
        {
            if(e % 256 == 0)
                continue;

            if(e != match_word)
            {
                char *recommended_src = strstr(word_store[e].main_word, recommended);
                char match_position = recommended_src - word_store[e].main_word;

                if(match_position == 0)
                {
                    if(first_print == 'y')
                    {
                        printf("\n\n\t\tRecommended Search\n");
                        printf(    "\t\t~~~~~~~~~~~~~~~~~~\n");
                        printf("\n\tEnglish Word \n");
                        printf("\t-----------\n");
                        first_print = 'n';
                    }
                    if(strlen(word_store[e].main_word) > 6)
                    {
                        printf("\t%s \t  \n",word_store[e].main_word);
                    }
                    else
                    {
                        printf("\t%s \t\t  \n",word_store[e].main_word);
                    }
                }
            }
        }
    }
}




void created_by()
{
    printf("\t\t===============================================\n");
    printf("\t\t=             Created by ...                  |\n");
    printf("\t\t==============================================|\n");
    printf("\t\t=       MD. REZAUL KARIM                      |\n");
    printf("\t\t=       ID:162-35-1670                        |\n\n");
    printf("\t\t=       SECTION:A                             |\n");
    printf("\t\t=       DAFFODIL INTERNATIONAL UNIVERSITY     |\n");
    printf("\t\t==============================================\n\n\n");
}



