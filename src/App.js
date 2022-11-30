import './App.css';
import { Routes, Route } from 'react-router-dom';
import Layout from "./pages/layout";
import Usuario from "./pages/usuario/usuario";
import Login from "./pages/login/login";
import Venta  from "./pages/venta/venta";

function App() {
  return (
    <div >
      <h1>Routes</h1>
      <Routes>
        <Route path="/" element={<Layout />}>
        <Route path="usuario" element={<Usuario />} />
        <Route path="login" element={<Login />} />
        <Route path="venta" element={<Venta />} />
        </Route>
      </Routes>
    </div>
  );
}

export default App;
