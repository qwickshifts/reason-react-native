type t;
[@mel.obj]
external make:
  (
    ~uri: string,
    ~width: int,
    ~height: int,
    ~scale: float,
    ~bundle: string,
    ~method: string,
    ~headers: Js.Dict.t(string),
    ~body: string,
    ~cache: [@mel.string] [
              | `default
              | `reload
              | [@mel.as "force-cache"] `forceCache
              | [@mel.as "only-if-cached"] `onlyIfCached
            ]
  ) =>
  t;
