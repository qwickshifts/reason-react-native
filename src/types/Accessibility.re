module AccessibilityRole: {
  type t;

  let adjustable: t;
  let alert: t;
  let button: t;
  let checkbox: t;
  let combobox: t;
  let header: t;
  let image: t;
  let imagebutton: t;
  let keyboardkey: t;
  let link: t;
  let menu: t;
  let menubar: t;
  let menuitem: t;
  let none: t;
  let progressbar: t;
  let radio: t;
  let radiogroup: t;
  let scrollbar: t;
  let search: t;
  let spinbutton: t;
  let summary: t;
  let switch_: t;
  let tab: t;
  let tablist: t;
  let text: t;
  let timer: t;
  let togglebutton: t;
  let toolbar: t;
  let grid: t;
} = {
  type t = string;

  let adjustable = "adjustable";
  let alert = "alert";
  let button = "button";
  let checkbox = "checkbox";
  let combobox = "combobox";
  let header = "header";
  let image = "image";
  let imagebutton = "imagebutton";
  let keyboardkey = "keyboardkey";
  let link = "link";
  let menu = "menu";
  let menubar = "menubar";
  let menuitem = "menuitem";
  let none = "none";
  let progressbar = "progressbar";
  let radio = "radio";
  let radiogroup = "radiogroup";
  let scrollbar = "scrollbar";
  let search = "search";
  let spinbutton = "spinbutton";
  let summary = "summary";
  let switch_ = "switch";
  let tab = "tab";
  let tablist = "tablist";
  let text = "text";
  let timer = "timer";
  let togglebutton = "togglebutton";
  let toolbar = "toolbar";
  let grid = "grid";
};

module Action = {
  [@deriving jsProperties]
  type t = {
    name: string,
    label: string,
  };
};

module Role: {
  type t;
  let alert: t;
  let button: t;
  let checkbox: t;
  let combobox: t;
  let grid: t;
  let heading: t;
  let img: t;
  let link: t;
  let list: t;
  let menu: t;
  let menubar: t;
  let menuitem: t;
  let none: t;
  let presentation: t;
  let progressbar: t;
  let radio: t;
  let radiogroup: t;
  let scrollbar: t;
  let searchbox: t;
  let slider: t;
  let spinbutton: t;
  let summary: t;
  let switch_: t;
  let tab: t;
  let tablist: t;
  let timer: t;
  let toolbar: t;
} = {
  type t = string;
  let alert = "alert";
  let button = "button";
  let checkbox = "checkbox";
  let combobox = "combobox";
  let grid = "grid";
  let heading = "heading";
  let img = "img";
  let link = "link";
  let list = "list";
  let menu = "menu";
  let menubar = "menubar";
  let menuitem = "menuitem";
  let none = "none";
  let presentation = "presentation";
  let progressbar = "progressbar";
  let radio = "radio";
  let radiogroup = "radiogroup";
  let scrollbar = "scrollbar";
  let searchbox = "searchbox";
  let slider = "slider";
  let spinbutton = "spinbutton";
  let summary = "summary";
  let switch_ = "switch";
  let tab = "tab";
  let tablist = "tablist";
  let timer = "timer";
  let toolbar = "toolbar";
};

module State = {
  type t;
  [@mel.obj]
  external t:
    (
      ~disabled: bool=?,
      ~selected: bool=?,
      ~checked: [
                  | [@mel.as "true"] `true_
                  | [@mel.as "false"] `false_
                  | `mixed
                ]
                  =?,
      ~busy: bool=?,
      ~expanded: bool=?,
      unit
    ) =>
    t;
};

module Value = {
  [@deriving jsProperties]
  type t = {
    [@mel.optional]
    min: option(int),
    [@mel.optional]
    max: option(int),
    [@mel.optional]
    now: option(int),
    [@mel.optional]
    text: option(string),
  };
};
