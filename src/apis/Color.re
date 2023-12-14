type t = string;

let rgb = (~r: int, ~g: int, ~b: int) => {j|rgb($r, $g, $b)|j};
let rgba = (~r: int, ~g: int, ~b: int, ~a: float) => {j|rgba($r, $g, $b, $a)|j};

let hsl = (~h: float, ~s: float, ~l: float) => {j|hsl($h, $s%, $l%)|j};
let hsla = (~h: float, ~s: float, ~l: float, ~a: float) => {j|hsl($h, $s%, $l%, $a)|j};

[@mel.inline]
let transparent = "transparent";

// Pre-defined colors
[@mel.inline]
let aliceblue = "aliceblue";

[@mel.inline]
let antiquewhite = "antiquewhite";

[@mel.inline]
let aqua = "aqua";

[@mel.inline]
let aquamarine = "aquamarine";

[@mel.inline]
let azure = "azure";

[@mel.inline]
let beige = "beige";

[@mel.inline]
let bisque = "bisque";

[@mel.inline]
let black = "black";

[@mel.inline]
let blanchedalmond = "blanchedalmond";

[@mel.inline]
let blue = "blue";

[@mel.inline]
let blueviolet = "blueviolet";

[@mel.inline]
let brown = "brown";

[@mel.inline]
let burlywood = "burlywood";

[@mel.inline]
let cadetblue = "cadetblue";

[@mel.inline]
let chartreuse = "chartreuse";

[@mel.inline]
let chocolate = "chocolate";

[@mel.inline]
let coral = "coral";

[@mel.inline]
let cornflowerblue = "cornflowerblue";

[@mel.inline]
let cornsilk = "cornsilk";

[@mel.inline]
let crimson = "crimson";

[@mel.inline]
let cyan = "cyan";

[@mel.inline]
let darkblue = "darkblue";

[@mel.inline]
let darkcyan = "darkcyan";

[@mel.inline]
let darkgoldenrod = "darkgoldenrod";

[@mel.inline]
let darkgray = "darkgray";

[@mel.inline]
let darkgreen = "darkgreen";

[@mel.inline]
let darkgrey = "darkgrey";

[@mel.inline]
let darkkhaki = "darkkhaki";

[@mel.inline]
let darkmagenta = "darkmagenta";

[@mel.inline]
let darkolivegreen = "darkolivegreen";

[@mel.inline]
let darkorange = "darkorange";

[@mel.inline]
let darkorchid = "darkorchid";

[@mel.inline]
let darkred = "darkred";

[@mel.inline]
let darksalmon = "darksalmon";

[@mel.inline]
let darkseagreen = "darkseagreen";

[@mel.inline]
let darkslateblue = "darkslateblue";

[@mel.inline]
let darkslategrey = "darkslategrey";

[@mel.inline]
let darkturquoise = "darkturquoise";

[@mel.inline]
let darkviolet = "darkviolet";

[@mel.inline]
let deeppink = "deeppink";

[@mel.inline]
let deepskyblue = "deepskyblue";

[@mel.inline]
let dimgray = "dimgray";

[@mel.inline]
let dimgrey = "dimgrey";

[@mel.inline]
let dodgerblue = "dodgerblue";

[@mel.inline]
let firebrick = "firebrick";

[@mel.inline]
let floralwhite = "floralwhite";

[@mel.inline]
let forestgreen = "forestgreen";

[@mel.inline]
let fuchsia = "fuchsia";

[@mel.inline]
let gainsboro = "gainsboro";

[@mel.inline]
let ghostwhite = "ghostwhite";

[@mel.inline]
let gold = "gold";

[@mel.inline]
let goldenrod = "goldenrod";

[@mel.inline]
let gray = "gray";

[@mel.inline]
let green = "green";

[@mel.inline]
let greenyellow = "greenyellow";

[@mel.inline]
let grey = "grey";

[@mel.inline]
let honeydew = "honeydew";

[@mel.inline]
let hotpink = "hotpink";

[@mel.inline]
let indianred = "indianred";

[@mel.inline]
let indigo = "indigo";

[@mel.inline]
let ivory = "ivory";

[@mel.inline]
let khaki = "khaki";

[@mel.inline]
let lavender = "lavender";

[@mel.inline]
let lavenderblush = "lavenderblush";

[@mel.inline]
let lawngreen = "lawngreen";

[@mel.inline]
let lemonchiffon = "lemonchiffon";

[@mel.inline]
let lightblue = "lightblue";

[@mel.inline]
let lightcoral = "lightcoral";

[@mel.inline]
let lightcyan = "lightcyan";

[@mel.inline]
let lightgoldenrodyellow = "lightgoldenrodyellow";

[@mel.inline]
let lightgray = "lightgray";

[@mel.inline]
let lightgreen = "lightgreen";

[@mel.inline]
let lightgrey = "lightgrey";

[@mel.inline]
let lightpink = "lightpink";

[@mel.inline]
let lightsalmon = "lightsalmon";

[@mel.inline]
let lightseagreen = "lightseagreen";

[@mel.inline]
let lightskyblue = "lightskyblue";

[@mel.inline]
let lightslategrey = "lightslategrey";

[@mel.inline]
let lightsteelblue = "lightsteelblue";

[@mel.inline]
let lightyellow = "lightyellow";

[@mel.inline]
let lime = "lime";

[@mel.inline]
let limegreen = "limegreen";

[@mel.inline]
let linen = "linen";

[@mel.inline]
let magenta = "magenta";

[@mel.inline]
let maroon = "maroon";

[@mel.inline]
let mediumaquamarine = "mediumaquamarine";

[@mel.inline]
let mediumblue = "mediumblue";

[@mel.inline]
let mediumorchid = "mediumorchid";

[@mel.inline]
let mediumpurple = "mediumpurple";

[@mel.inline]
let mediumseagreen = "mediumseagreen";

[@mel.inline]
let mediumslateblue = "mediumslateblue";

[@mel.inline]
let mediumspringgreen = "mediumspringgreen";

[@mel.inline]
let mediumturquoise = "mediumturquoise";

[@mel.inline]
let mediumvioletred = "mediumvioletred";

[@mel.inline]
let midnightblue = "midnightblue";

[@mel.inline]
let mintcream = "mintcream";

[@mel.inline]
let mistyrose = "mistyrose";

[@mel.inline]
let moccasin = "moccasin";

[@mel.inline]
let navajowhite = "navajowhite";

[@mel.inline]
let navy = "navy";

[@mel.inline]
let oldlace = "oldlace";

[@mel.inline]
let olive = "olive";

[@mel.inline]
let olivedrab = "olivedrab";

[@mel.inline]
let orange = "orange";

[@mel.inline]
let orangered = "orangered";

[@mel.inline]
let orchid = "orchid";

[@mel.inline]
let palegoldenrod = "palegoldenrod";

[@mel.inline]
let palegreen = "palegreen";

[@mel.inline]
let paleturquoise = "paleturquoise";

[@mel.inline]
let palevioletred = "palevioletred";

[@mel.inline]
let papayawhip = "papayawhip";

[@mel.inline]
let peachpuff = "peachpuff";

[@mel.inline]
let peru = "peru";

[@mel.inline]
let pink = "pink";

[@mel.inline]
let plum = "plum";

[@mel.inline]
let powderblue = "powderblue";

[@mel.inline]
let purple = "purple";

[@mel.inline]
let rebeccapurple = "rebeccapurple";

[@mel.inline]
let red = "red";

[@mel.inline]
let rosybrown = "rosybrown";

[@mel.inline]
let royalblue = "royalblue";

[@mel.inline]
let saddlebrown = "saddlebrown";

[@mel.inline]
let salmon = "salmon";

[@mel.inline]
let sandybrown = "sandybrown";

[@mel.inline]
let seagreen = "seagreen";

[@mel.inline]
let seashell = "seashell";

[@mel.inline]
let sienna = "sienna";

[@mel.inline]
let silver = "silver";

[@mel.inline]
let skyblue = "skyblue";

[@mel.inline]
let slateblue = "slateblue";

[@mel.inline]
let slategray = "slategray";

[@mel.inline]
let snow = "snow";

[@mel.inline]
let springgreen = "springgreen";

[@mel.inline]
let steelblue = "steelblue";

[@mel.inline]
let tan = "tan";

[@mel.inline]
let teal = "teal";

[@mel.inline]
let thistle = "thistle";

[@mel.inline]
let tomato = "tomato";

[@mel.inline]
let turquoise = "turquoise";

[@mel.inline]
let violet = "violet";

[@mel.inline]
let wheat = "wheat";

[@mel.inline]
let white = "white";

[@mel.inline]
let whitesmoke = "whitesmoke";

[@mel.inline]
let yellow = "yellow";

[@mel.inline]
let yellowgreen = "yellowgreen";
