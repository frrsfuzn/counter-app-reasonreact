open Utils;

[@react.component]

let make = () => {
    let (count, setCount) = React.useState(_ => 0);
    <div className="grid rounded shadow p-2 bg-white m-auto h-48 min-w-48 justify-center">
        <h1 className="text-3xl font-bold text-center">{s("Count: " ++ string_of_int(count))}</h1>
        <div className="grid justify-center grid-cols-3">
            <button className="mx-1 w-20 bg-red-400 text-lg rounded-lg" onClick={_ => setCount(prev => prev - 1)}>{s("-")}</button>
            <button className="mx-1 w-20 bg-sky-400 text-lg rounded-lg" onClick={_ => setCount(_ => 0)}>{s("Reset")}</button>
            <button className="mx-1 w-20 bg-lime-500 text-lg rounded-lg" onClick={_ => setCount(prev => prev + 1)}>{s("+")}</button>
        </div>
    </div>
}  
